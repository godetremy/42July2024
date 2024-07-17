#include "ft_strncat.c"
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	char c1[] = "hello ";
	char c2[100] = "world";
	char c3[] = "hello ";
	char c4[100] = "world";
	printf("YOU : %s\n", ft_strncat(c1, c2, 3));
	printf("CMP : %s\n", strncat(c3, c4, 3));
}
