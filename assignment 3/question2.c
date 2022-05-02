#include<stdio.h>
int prime(int a,int b);
int main(){
    int x,y,i;
    printf("Enter a integer:");
    scanf("%d", &x);
    i=x-1;
    y= prime(x,i);
    if(y==0){
        printf("The number is prime");
    }
    else{
        printf("The number is not prime");
    }
return 0;
}
int prime(int a,int b){
    if(b != 1){
        if( a%b != 0){
            return prime(a,b-1);
        }
        else{
            return 1;
        }
    }
    else{
        return 0;
    }

}