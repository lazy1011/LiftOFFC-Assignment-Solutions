#include<stdio.h>
int fun(int a);
int main(){
    int x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    y=fun(x);
    if(y==0){
        printf("The number is even");
    }
    else{printf("The number is odd");}
return 0;
}
int fun(int a){
    if(a%2==0){
        return 0;
    }
    else{return 1;}
}