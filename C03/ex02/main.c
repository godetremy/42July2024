#include "ft_strcat.c"
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	char c1[] = "aaaghgh-";
	char c2[100] = "ghgh";
	char c3[] = "aaaghgh-";
	char c4[100] = "ghgh";
	printf("YOU : %s\n", ft_strcat(c1, c2));
	printf("CMP : %s\n", strcat(c3, c4));
}
