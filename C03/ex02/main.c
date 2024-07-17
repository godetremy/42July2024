#include "ft_strcat.c"
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	char c1[] = "hello ";
	char c2[100] = "world";
	char c3[] = "hello ";
	char c4[100] = "world";
	printf("YOU : %s\n", ft_strcat(c1, c2));
	printf("CMP : %s\n", strcat(c3, c4));
}
