#include "ft_strcpy.c"
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char dest[100] = "aaaaaaaa";
	char destVerif[100] = "aaaaaaaa";
	
	ft_strcpy(dest, argv[1]);
	strcpy(destVerif, argv[1]);
	
	printf("Original  : %s\n", destVerif);
	printf("Your func : %s\n", dest);
}
