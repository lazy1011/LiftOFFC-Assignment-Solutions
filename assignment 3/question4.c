#include<stdio.h>
int swap(int *a, int *b);
int main(){
    int x,y;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    printf("Value before swap are %d and %d\n",x,y);
    swap(&x,&y);
    printf("After swap the values are %d and %d\n",x,y);
return 0;
}
int swap(int *a,int *b){
    int c;
    c=*b;
    *b=*a;
    *a=c;
}