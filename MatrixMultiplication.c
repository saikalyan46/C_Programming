// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
    // Write C code here
    int **p = (int**) malloc(sizeof(int*) * 2);
    int **q = '\0';
    int **r = '\0';
    for(int i=0;i<2;i++) {
        p[i] = (int*) malloc(sizeof(int) * 2);
    }
    printf("enter 2*2 p matrix elements\n");
    for(int i=0;i<2;i++) {
        printf("i:%d\n",i);
        printf("\n");
        for(int j=0;j<2;j++) {
            printf("j:%d\n",j);
            scanf("%d", &p[i][j]);
        }
    }
    printf("2*2 p matrix elements are \n");
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
                printf("%d", p[i][j]);
                printf("\t");
        }
        printf("\n");
    }

    q = (int**) malloc(sizeof(int*) * 2);
    for(int i=0;i<2;i++) {
        q[i] = (int*) malloc(sizeof(int) * 2);
    }
    printf("enter 2*2 q matrix elements\n");
    for(int i=0;i<2;i++) {
        printf("i1:%d\n",i);
        for(int j=0;j<2;j++) {
                printf("j1:%d\n",j);
                scanf("%d", &q[i][j]);
        }
    }
    printf("2*2 q matrix elements are \n");
    for(int i=0;i<2;i++) {

        for(int j=0;j<2;j++) {
                printf("%d", q[i][j]);
                printf("\t");
        }
        printf("\n");
    }

    
    r = (int**) malloc(sizeof(int*) * 2);
    for(int i=0;i<2;i++) {
        r[i] = (int*) malloc(sizeof(int) * 2);
    }

    printf("Multiplied values are : \n");
    for(int i=0;i<2;i++) {
        for(int j=0,k=0,l=0;l<2;l++) {
            r[i][l]=p[i][j]*q[k][l]+p[i][j+1]*q[k+1][l];
            printf("%d",r[i][l]);
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}
