//To demonstrate Call by value
#include<Stdio.h>
int swap(int,int);
int main()
{
    int a = 20,b = 10;
    swap(a,b);
    printf("value of x = %d.\n",a);
    printf("value of x = %d.",b);
    return 0;
}
int swap(int a,int b){
   a = b;
   b = a;
}
