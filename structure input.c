#include <stdio.h>

struct record{
	int id;
	char name[100];
	int age;
	long int number;
};


int main(){
	struct record s1;    
	printf("Enter details of Employee - \n");               
	printf("Enter Employee ID -- \n");                                                                       
	scanf("%d", &s1.id);
	printf("Enter Employee Name -- \n");                                                                       
	scanf("%s",&s1.name);
	printf("Enter Employee Age -- \n");                                                                       
	scanf("%d",&s1.age);
	printf("Enter Employee Number -- \n");                                                                       
	scanf("%lld",&s1.number);
		
	printf("Employees Details are : - \n");
	printf("Employee ID is - %d\n",s1.id);
    printf("Name of Employee is - %s\n",s1.name);
    printf("Age of Employee is - %d\n",s1.age);
    printf("Phone Number of Employee is - %lld\n",s1.number);
	return 0;
	}