#include <stdio.h>
#include <unistd.h>

void print_comb(int line[4])
{
    char c;
    c = line[0] + '0';
    write(1, &c, 1);
    write(1, " ", 1);
    c = line[1] + '0';
    write(1, &c, 1);
    write(1, " ", 1);
    c = line[2] + '0';
    write(1, &c, 1);
    write(1, " ", 1);
    c = line[3] + '0';
    write(1, &c, 1);
    write(1, "\n", 1);
}

void rush01(int possibility[24][4])
{
    int i = 0;
    int j = 1;
    int arr[4];

    while (i < 331776) // 331776
    {
        printf("== %d\n", i - 24*j);
        print_comb(possibility[i - 24 * j - 1]);
        i++;
        print_comb(possibility[i - 24 * j - 1]);
        i++;
        print_comb(possibility[i - 24 * j - 1]);
        i++;
        print_comb(possibility[i - 24 * j - 1]);
        i++;
        printf("------\n");
        j = i / 24;
    }

}

int main()
{
    int possibility[24][4] = {
        {1, 2, 3, 4},
        {1, 2, 4, 3},
        {1, 3, 2, 4},
        {1, 3, 4, 2},
        {1, 4, 2, 3},
        {1, 4, 3, 2},
        {2, 1, 3, 4},
        {2, 1, 4, 3},
        {2, 3, 1, 4},
        {2, 3, 4, 1},
        {2, 4, 1, 3},
        {2, 4, 3, 1},
        {3, 1, 2, 4},
        {3, 1, 4, 2},
        {3, 2, 1, 4},
        {3, 2, 4, 1},
        {3, 4, 1, 2},
        {3, 4, 2, 1},
        {4, 1, 2, 3},
        {4, 1, 3, 2},
        {4, 2, 1, 3},
        {4, 2, 3, 1},
        {4, 3, 1, 2},
        {4, 3, 2, 1},
    };
    rush01(possibility);
}