#include <stdio.h>

int main()
{
    int n,i,j,k,l,m,o;
    printf("enter value- ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n;j>i;j--){
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    
    for(l=n-1;l>=1;l--){
        for(m=1;m<=n-l;m++){
            printf(" ");
        }
        for(o=1;o<=2*l-1;o++){
            printf("*");
        }
        printf("\n");
    }
    


    return 0;
}
