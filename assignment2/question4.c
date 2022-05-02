#include <stdio.h>
int main()
{
    int a=0;
    int b=1;
    int c;

    int count=3;
    int n;
    printf("enter N-->");
    scanf("%d",&n);
    if (n==1)
    {
        printf("%d",a);
    }
    else if (n==2)
    {
        printf("%d",a);
        printf(" %d",b);
    }
    else if (n>2)
    {
        printf("%d",a);
        printf(" %d",b);
        while(count<=n)
        {
            c=a+b;
            a=b;
            b=c;
            count++;
            printf(" %d",c);
        }
    }
    return 0;
}