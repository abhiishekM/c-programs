#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	printf("Enter no. of Elements ");
	scanf("%d",&n);
	int *ptr;
//trial only trial.hehe
	ptr=(int*)malloc(n*sizeof(int));
	//hello guys
	printf("Enter Elements \n");
	for(int i=0; i<n; ++i) {
		scanf("%d",ptr+i);// we don't need to use & address operator here as initial address is already stored in pointer
	}

	for(int i=0; i<n; ++i) {
		printf("%d ",*(ptr+i));
	}

	return 0;
}
