#include "ft_strlcpy.c"
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char src[100] = "artetete";
	char srcVerif[100] = "artetete";
	char dest[100] = "";
	char destVerif[100] = "";
	
	int o = strlcpy(destVerif, srcVerif, 1);
	int r = ft_strlcpy(dest, src, 1);
	
	printf("Original  : %s\n", destVerif);
	printf("Original  : %d\n", o);
	printf("Your func : %s\n", dest);
	printf("Your func : %d\n", r);
}
