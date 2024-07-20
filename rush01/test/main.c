#include <stdio.h>

void ft_print_value(int value[6][6])
{
	int i;
	int j;
	i = 0;
	
	while (i <= 5 )
	{
		j = 0;
		printf("");
		while( j <= 5)
		{
			if (i == 0 || i == 5 || j == 0 || j == 5)
				printf("\033[41m");
			printf(" %d ", value[i][j]);
			printf("\033[0m");
			j++;
		}
		i++;
		printf("\n");
	}
}

_Bool is_table_complete(int table[6][6])
{
	int i = 1;
	int j = 1;
	
	while (i <= 5)
	{
		j = 1;
		while (j <= 5)
		{
			if (table[i][j] == '0')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void complete_corner(int table[6][6])
{
	table[1][1] = 5-((table[0][1]+table[1][0])/2);
	table[1][4] = 5-((table[0][4]+table[1][5])/2);
	table[4][1] = 5-((table[5][1]+table[4][0])/2);
	table[4][4] = 5-((table[5][4]+table[4][5])/2);
}

_Bool as_max_occurence_line(int table[6][6], int nb)
{
	int i;
	int j;
	int occ;
	
	i = 1;
	occ = 0;
	while(i <= 4)
	{
		j = 1;
		while(j <= 4)
		{
			if (table[i][j] == nb)
				occ++;
			j++;
		}
		i++;
	}
	return (occ == 3);
}

void complete_max_occ(int table[6][6], int nb)
{
	int i;
	int j;
	int found_on_line[3];
	int found_on_column[3];
	int fol_i = 0;
	int foc_i = 0;
	int pos_line = 10;
	int pos_column = 10;
	
	i = 1;
	while(i <= 4)
	{
		j = 1;
		while(j <= 4)
		{
			if (table[i][j] == nb)
			{
				pos_line -= i;
				pos_column -= j;
			}
			j++;
		}
		i++;
	}
	table[pos_line][pos_column] = nb;
}

void complete_lines_if_complete(int table[6][6])
{
	int i;
	int j;
	int occ;
	int val;
	int pos;
	
	i = 1;
	while(i <= 4)
	{
		j = 1;
		occ = 0;
		val = 10;
		pos = 0;
		while (j <= 4)
		{
			if (table[i][j] != 0)
			{
				occ++;
				val -= table[i][j];
			} else {
				pos = j;
			}
			j++;
		}
		if (occ == 3)
		{
			table[i][pos] = val;
		}
		i++;
	}
}

void complete_column_if_complete(int table[6][6])
{
	int i;
	int j;
	int occ;
	int val;
	int pos;
	
	i = 1;
	while(i <= 4)
	{
		j = 1;
		j = 1;
		occ = 0;
		val = 10;
		pos = 0;
		while (j <= 4)
		{
			if (table[j][i] != 0)
			{
				occ++;
				val -= table[j][i];
			} else {
				pos = j;
			}
			j++;
		}
		if (occ == 3)
		{
			table[pos][i] = val;
		}
		i++;
	}
}

void complete_line(int table[6][6])
{
	int i;
	
	i = 1;
	while(i <= 4)
	{
		if (table[i][0] == 4)
		{
			table[i][1] = 1;
			table[i][2] = 2;
			table[i][3] = 3;
			table[i][4] = 4;
		}
		if (as_max_occurence_line(table, 1))
			complete_max_occ(table, 1);
		if (as_max_occurence_line(table, 2))
			complete_max_occ(table, 2);
		if (as_max_occurence_line(table, 3))
			complete_max_occ(table, 3);
		if (as_max_occurence_line(table, 4))
			complete_max_occ(table, 4);
		complete_lines_if_complete(table);
		i++;
	}
}

void complete_column(int table[6][6])
{
	int i;
	
	i = 1;
	while(i <= 4)
	{
		if (table[0][i] == 4) // Si ligne i == 4 alors ligne 1 - 2 - 3 - 4
		{
			table[1][i] = 1;
			table[2][i] = 2;
			table[3][i] = 3;
			table[4][i] = 4;
		}
		if (table[0][i] == 2 && table[5][i] == 3) // Si haut est 2 et bas 3 alors la plus heute tour serra au 2
			table[2][i] = 4;
		if (table[0][i] == 3 && table[5][i] == 2) // Si haut est 3 et bas 2 alors la plus heute tour serra au 3
			table[3][i] = 4;
		complete_column_if_complete(table);
		i++;
	}
}

int main()
{
	int timeout = 0;
	int value[6][6] = {
		{0,4,3,2,1,0},
		{4,0,0,0,0,1},
		{3,0,0,0,0,2},
		{2,0,0,0,0,2},
		{1,0,0,0,0,2},
		{0,1,2,2,2,0},
	};
	complete_corner(value);
	while (is_table_complete(value) && timeout <= 2)
	{
		complete_line(value);
		complete_column(value);
		timeout++;
	}
	ft_print_value(value);
}
