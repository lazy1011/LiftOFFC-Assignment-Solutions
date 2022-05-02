#include<stdio.h>
int findLarge(int[],int);
int main()
{
    int a[50],a_size,large_num;
    printf("Enter the size of the array:\n");
    scanf("%d",&a_size);
    printf("Enter the elements into array:\n");
    for (int i = 0; i < a_size; i++)
    {
        scanf("%d",&a[i]);
    }
    large_num = findLarge(a,a_size);
    printf("Largest number is %d",large_num);
    return 0;
}
int findLarge(int a[], int a_size)
{
    int large_num;
    large_num = a[0];
    for (int i = 1; i < a_size; i++)
    {
        if (large_num < a[i])
        {
            large_num = a[i];
        }
    }
    return large_num;
}