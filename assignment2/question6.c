#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        printf("* ");

    }
    for(int i=1;i<(n-1);i++){
        printf("\n");
          for(int j=0;j<n;j++){
            if(j==0){printf("*");}
            else if(j==n-1){printf(" *");}
            else{printf("  ");}
            }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        
        printf("* ");
    }
return 0;
}