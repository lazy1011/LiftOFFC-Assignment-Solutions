#include <stdio.h>
int main(void)
{
    char nam[50];
    printf("Enter name : ");
    gets(nam);

    char brh[50];
    printf("Enter branch : ");
    gets(brh);

    char hobb[500];
    printf("Enter hobbies : ");
    gets(hobb);

    int regN;
    printf("Enter Regd no. : ");
    scanf("%d",&regN);

    printf("Name : %s \n", nam);
    printf("Branch : %s\n", brh);
    printf("Regd no : %d\n", regN);
    printf("Hobbies : %s", hobb);
return 0;
}