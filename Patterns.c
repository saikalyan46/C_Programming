// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
    // Write C code here
    int i=0,j=0,k=0;
    printf("Hello world\n");
    for(i=0;i<6;i++) {
        for(j=0;j<5-i;j++) {
            printf(" ");
        }
        for(k=0;k<=i;k++) {
            
            
            //printf("s");
            //printf("\t");
            printf("%d",(int)pow(2,k));
        }
        printf("\n");
    }
    return 0;
}
