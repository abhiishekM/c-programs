#include <stdio.h>
#include <string.h>
int main(){
	char str[20] = "Hello Everyone";
	char str1[20] = "Hello Everyone";
	strupr(str);
	strlwr(str1);
	printf("String is - %s\n",str);
	printf("String is - %s",str1);
	
	
	
}