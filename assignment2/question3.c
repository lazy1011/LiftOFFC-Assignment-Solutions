#include<stdio.h>
#include<math.h>
int main(){
    int num,digit,first,last;
    printf("Enter the number:");
    scanf("%d",&num);
    digit=log10(num);
    last=num%10;
    first=num/pow(10,digit);
    num=(num-(first*pow(10,digit))-last);
    num=(num+(last*pow(10,digit))+first);
    printf("Swapped number is %d",num);
    
    
return 0;
}