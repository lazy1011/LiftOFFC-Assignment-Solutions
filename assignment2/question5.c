#include<stdio.h>
int main()
{
    int i, j,k;
    int n=2;
    int m=2;
    int A[2][2],B[2][2];
    int Sum[n][m];
    int mult[2][2];
    printf("Enter the value of 1st Matrix:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter the value of 2nd Matrix:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            Sum[i][j]=A[i][j]+B[i][j];
        }
    }
    printf("The Sum of two Matrix is:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ",Sum[i][j]);
        }
        printf("\n");
    }
    printf("Multiplication of two matrix:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            mult[i][j]=0;
            for(k=0; k<m; k++)
            {
                mult[i][j]=mult[i][j]+A[i][k]*B[k][j];
            }
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ",mult[i][j]);
        }
        printf("\n");
    }
    return 0;
}