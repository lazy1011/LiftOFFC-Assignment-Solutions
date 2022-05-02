#include <stdio.h>
int hcf(int a, int b);
int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    printf("G.C.D of %d and %d is %d.", x, y, hcf(x, y));
    return 0;
}

int hcf(int a, int b) {
    if (b != 0)
        return hcf(b, a % b);
    else
        return a;
}