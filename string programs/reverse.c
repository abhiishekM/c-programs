//reverse a string without using function
#include <stdio.h>

int main(){
	char str[20],temp;
	printf("Enter your string - ");
	scanf("%s",&str);
	int cnt=0;
    while(str[cnt]!='\0'){
	cnt++;
}
	int i,j;
	for(i = 0,j = cnt-1;i < j;i++,j--){
		temp = str[i];
		str[i]= str[j];
		str[j]=temp;
	}

	printf("Reversed String = %s",str);

return 0;
	
}
