// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
char ch[5]="madam";
int i=0;
for(i=0;ch[i];i++); //0-m 1-a 2-d 3-a 4-m 5-null
printf("%d \n", i);
for (int j=0;;j++,i--) {
    if(ch[i-1] == ch[j]) {
        if((i-1) == j) {
            printf("palindrome\n");
            break;
        }
         else {
            break;
         }
    }
}


for (int j=0,i=i-1;j<=(i-1)/2;j++,i--) {
    if(ch[i] == ch[j]) {
       continue;
    } else {
        break;
    }
}
if(i== j) {
    printf("palindrome");
}
/*
int i=0;
char ch[20]="madam";
char sh[20];
for(i=0;ch[i];i++)
sh[i]=ch[i];
sh[i]='\0';
for(int j=0;ch[j];j++)
if(ch[j]==sh[j])
pf(pall)
else
pf("not palindrome")
*/
//printf("Sai\n");
/*int size,i;

//printf("Sai\n");
scanf("%d",&size);
int arr[size];
printf("Entered Size:%d\n",size);
//char a[] ="";
for(i=1;i<=size;i++) {
    //scanf("%s",a);
    printf("enter: \n");
    scanf("%d",&arr[i]);
    printf("%d\n", arr[i]);
}*/
/*
int i,j=0,size=5;
char ch[20]="Ganesh";
int arr[size];
for(i=1;i<=size;i++);
for (i= 0;ch[i];i++) //for(i=48;48<71)
{
    //j=j+1;
    printf("%c \n",i[ch]);
} */  
    return 0;
}
