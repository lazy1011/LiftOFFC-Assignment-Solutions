#include<stdio.h>
int main(){
    int n;
    int num1=0,num2=1,num3;
    printf("Enter number of seqence:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d,",num2);
        num3=num2;
        num2=num2+num1;
        num1=num3;
    }

return 0;
}