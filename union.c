#include <stdio.h>

union Data{
	int i;
	float j;
	char str[20];
};

int main(){
	union Data data={1,"James",90,45};
	printf("Integer %d\n",data.i);
	printf("String %s\n",data.str);
	printf("Value %f\n",data.j);
}
