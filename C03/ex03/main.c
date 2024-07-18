#include "ft_strncat.c"
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	char c1[] = "aqqa";
	char c2[100] = "";
	char c3[] = "aqqa";
	char c4[100] = "";
	printf("YOU : %s\n", ft_strncat(c1, c2, 50));
	printf("CMP : %s\n", strncat(c3, c4, 50));
}
