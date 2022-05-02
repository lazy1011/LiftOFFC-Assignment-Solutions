#include<stdio.h>
int main(){
    int r,c;
    int matrice1[2][2],matrice2[2][2],matrice3[2][2],matrice4[2][2];
    printf("Enter first the 2x2 matrice\n");
    for(r=0;r<2;r++){
           for(c=0;c<2;c++){
               scanf("%d",&matrice1[r][c]);
           }
    }
    printf("Enter second the 2x2 matrice\n");
    for(r=0;r<2;r++){
           for(c=0;c<2;c++){
               scanf("%d",&matrice2[r][c]);
           }
    }
    for(r=0;r<2;r++){
        for(c=0;c<2;c++){
            matrice3[r][c]=(matrice1[r][c]+matrice2[r][c]);
        }
    }
    printf("The sum of matrices is \n");
    for(r=0;r<2;r++){
        printf("%d %d",matrice3[r][0],matrice3[r][1]);
        printf("\n");
    }
    matrice4[0][0]=(matrice1[0][0]*matrice2[0][0])+(matrice1[0][1]*matrice2[1][0]);
    matrice4[0][1]=(matrice1[0][0]*matrice2[0][1])+(matrice1[0][1]*matrice2[1][1]);
    matrice4[1][0]=(matrice1[0][1]*matrice2[0][0])+(matrice1[1][1]*matrice2[1][0]);
    matrice4[1][1]=(matrice1[0][1]*matrice2[0][1])+(matrice1[1][1]*matrice2[1][1]);
    printf("The product of matrices is \n");
    for(r=0;r<2;r++){
        printf("%d %d",matrice4[r][0],matrice4[r][1]);
        printf("\n");
    }
    
return 0;
}