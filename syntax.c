//structure program

#include <stdio.h>

struct student{
    int id;
    char names[50];
    float marks;
    float percentage;
};

int main()
{
    struct student s1 = {1,"James",90,45};
    printf("ID of Student is - %d\n",s1.id);
    printf("Name of Student is - %s\n",s1.names);
    printf("Marks of Student is - %2f\n",s1.marks);
    printf("Percent he got is - %2f\n",s1.percentage);
 return 0;
}