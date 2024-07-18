#include "ft_strlcat.c"
#include <bsd/string.h>
#include <stdio.h>

int main()
{
	char c1[] = "hel";
	char c2[100] = "";
	char c3[] = "hel";
	char c4[100] = "";
	printf("YOU : %d\n", ft_strlcat(c1, c2, 5));
	printf("YOU : %s\n", c1);
	printf("CMP : %zu\n", strlcat(c3, c4, 5));
	printf("CMP : %s\n", c2);
	printf("\n[ Retry ]");
}
