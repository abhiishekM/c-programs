#include <stdio.h>
#include <string.h>
int main()
{   char src[10]="HUEHUEHUE";
    char crs[10];
    strncpy(crs,src,3);
	crs[3]="\0"; 
    printf("copied string - %s\n", crs);
    printf("SUJEET");
    
return 0;
}