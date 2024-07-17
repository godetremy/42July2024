#include "ft_strlcpy.c"
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char src[100] = "hellooooo";
	char srcVerif[100] = "hellooooo";
	char dest[100] = "";
	char destVerif[100] = "";
	
	int o = strlcpy(destVerif, srcVerif, 5);
	int r = ft_strlcpy(dest, src, 5);
	
	printf("Original  : %s\n", destVerif);
	printf("Original  : %d\n", o);
	printf("Your func : %s\n", dest);
	printf("Your func : %d\n", r);
}
