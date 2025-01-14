#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100]="Hello";
    char str2[100]="Everyone";
    int result = strcmp(str1,str2);
    //str1=str2, both strings are equal
    if(result==0)
    printf("Strings are equal");
    
    //if str1>str2, return value>0;
    else if(result<0)
    printf("%s comes before %s\n", str1,str2);
    
    //if str1<str2, return value<0;
    else
    printf("%s come after %s\n",str1,str2);

    return 0;
}
