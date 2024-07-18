#include "ft_strncmp.c"
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	argc = 0;
	printf("YOU : %d\n", ft_strncmp(argv[1], argv[2], 1));
	printf("CMP : %d\n", strncmp(argv[1], argv[2], 1));
}
