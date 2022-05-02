#include<stdio.h>
int gre(int a[],int b);
int main(){
    int i,y;
    printf("Enter the size of array:");
    scanf("%d",&i);
    int num[i-1];
    for(int k=0;k<i;k++){
        printf("Enter element number %d:",k+1);
        scanf("%d",&num[k]);
    }
    y=gre(num,i);
    printf("The greatest number of array is %d",y);
return 0;
}
int gre(int a[],int b){
    for(int i=0;i<b;i++){
        if(a[0]<a[i]){
            a[0]=a[i];
        }
    }
return a[0];
}