#include <stdio.h>

struct book{
	char bname[50];
	int bprice;
	char bauthor[50];
	int bpages;
	
};


int main(){
	struct book s1; 
	struct book s2; 
	printf("Enter First Book Details -- \n");
	printf("Enter Book Name -- \n");                                                                       
	scanf("%s", s1.bname);
	printf("Enter Book Price -- \n");                                                                       
	scanf("%d",&s1.bprice);
	printf("Enter Book Author -- \n");                                                                       
	scanf("%s",s1.bauthor);
	printf("Enter Book Pages -- \n");                                                                       
	scanf("%d",&s1.bpages);
	
	printf("\n\nEnter Second Book Details -- \n");
	printf("Enter Book Name -- \n");                                                                       
	scanf("%s", s2.bname);
	printf("Enter Book Price -- \n");                                                                       
	scanf("%d",&s2.bprice);
	printf("Enter Book Author -- \n");                                                                       
	scanf("%s",s2.bauthor);
	printf("Enter Book Pages -- \n");                                                                       
	scanf("%d",&s2.bpages);
	
	printf("Detail of Books - \n");
	printf("%s %d %s %d\n",s1.bname,s1.bprice,s1.bauthor,s1.bpages);
	printf("%s %d %s %d",s2.bname,s2.bprice,s2.bauthor,s2.bpages);
	
	
    
	
	return 0;
	}