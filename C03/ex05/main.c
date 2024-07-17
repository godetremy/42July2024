#include "ft_strlcat.c"
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	char c1[] = "hel";
	char c2[100] = "";
	char c3[] = "hel";
	char c4[100] = "";
	printf("YOU : %d\n", ft_strlcat(c1, c2, 3));
	printf("CMP : %lu\n", strlcat(c3, c4, 3));
}
