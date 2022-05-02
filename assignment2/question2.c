#include<stdio.h>
int main(){
    int a=0;
    int i=0;
    int even=0, odd=0;
    int num[10];
    for(i;i<10;i++){
        printf("Input number %d:",i+1);
        scanf("%d",&num[i]);
    }
    while(a<10){
        if(num[a]%2==0){
            even=even+num[a];
        }
        else{odd=odd+num[a];}
        a++;
    }
    printf("Sum of even numbers is %d\n",even);
    printf("Sum of odd numbers is %d\n",odd);
return 0;
}