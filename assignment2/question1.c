#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char str1[50],str2[50],str3[100],stat;
    printf("Enter string 1:");
    scanf("%s",str1);
    printf("Enter string 2:");
    scanf("%s",str2);
    strcat(str1,str2);
    printf("The concatenate string is %s\n",str1);
    for( i=0;str1[i] != '\0';i++){}
    printf("The reverse order is:");
    for( i;i>0;i--){
        printf("%c",str1[i-1]);
    }
    
return 0;
}