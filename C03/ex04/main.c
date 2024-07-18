#include "ft_strstr.c"
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	char c1[] = "aaqqaaa";
	char c2[100] = "qq";
	char c3[] = "aaqqaaa";
	char c4[100] = "qq";
	printf("YOU : %s\n", ft_strstr(c1, c2));
	printf("CMP : %s\n", strstr(c3, c4));
}
