// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C cprintf("Hello world");
    int a[2][3]={{1,1,1},{1,1,1}};
    int b[2][3]={{1,1,1},{1,1,1}};
    int c[2][3]={};
    int i,j,k,l;
    /*for(i=0;i<2;i++) {
        for(j=0;j<3;j++) {
            printf("%d",a[i][j]);
           printf("\t");
        }
        printf("\n");
    }*/
    //Multiplication
    
    for(i=0;i<2;i++) {
        for(j=0,k=0,l=0;l<3;l++) {
            c[i][l]=a[i][j]*b[k][l]+a[i][j+1]*b[k+1][l];
            printf("%d",c[i][l]);
            printf("\t");
        }
        printf("\n");
    }
    
    
    return 0;
}
