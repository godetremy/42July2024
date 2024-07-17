#include "ft_strncpy.c"
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char dest[100] = "aaaaaaaa";
	char destVerif[100] = "aaaaaaaa";
	
	ft_strncpy(dest, argv[1], 5);
	strncpy(destVerif, argv[1], 5);
	
	printf("Original  : %s\n", destVerif);
	printf("Your func : %s\n", dest);
}
