#include "ft_strncmp.c"
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("YOU : %d\n", ft_strncmp(argv[1], argv[2], 100));
	printf("CMP : %d\n", strncmp(argv[1], argv[2], 100));
}
