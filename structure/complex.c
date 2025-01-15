// taking input of complex numbers and adding them

#include <stdio.h>
typedef struct{
    int real;
    int imag;
}complex;

void read_co mplex(complex *);
void read_complex(complex *x){
    scanf("%d%d", &(x->real), &(x->imag));
}

complex add_complex(complex,complex);
complex add_complex(complex x,complex y){
    complex temp;
    temp.real = x.real+y.real;
    temp.imag = x.imag+y.imag;
    return temp;
}

void write_complex(complex);
void write_complex(complex c){
      if(c.imag>0){
    printf("%d + %di",c.real,c.imag);
      }
        else    
    printf("%d %di",c.real,c.imag);
}
int main()
{
   complex a,b,c;
   read_complex(&a);
   read_complex(&b);
   c=add_complex(a,b);
   write_complex(c);
         return 0;
}
