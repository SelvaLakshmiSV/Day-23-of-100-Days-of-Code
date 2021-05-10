#include<stdio.h>
int area_rect(int length,int breath){
    return length*breath;
}
int main()
{
    int length = 10,breath = 5,area;
    area = area_rect(length,breath);
    printf("Area of the rectangle is %d.",area);
    return 0;
}
