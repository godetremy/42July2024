#include "ft_strncpy.c"
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char src[100] = "abcdefghijklmnop";
	char srcVerif[100] = "abcdefghijklmnop";
	char dest[100] = "coucou";
	char destVerif[100] = "coucou";
	
	ft_strncpy(dest, src, 2);
	strncpy(destVerif, srcVerif, 2);
	
	printf("Original  : %s\n", destVerif);
	printf("Your func : %s\n", dest);
}
