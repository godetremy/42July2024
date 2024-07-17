#include "ft_strstr.c"
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	char c1[] = "hello ";
	char c2[100] = "lo";
	char c3[] = "hello ";
	char c4[100] = "lo";
	printf("YOU : %s\n", ft_strstr(c1, c2));
	printf("CMP : %s\n", strstr(c3, c4));
}
