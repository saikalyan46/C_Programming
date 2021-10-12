// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    char ch[20]="sai ram";
    char sh[5] = "ram";
    int i=0,j=0,k=0,v=0;
    char s[5]="";
    char r[5]="";
    
    //
    for(i=0;ch[i];i++) {
        if(ch[i]!=' ') {
           s[i]=ch[i];
        } else {
            break;
        }
    }
    s[i]='\0';

    for(j=i+1,k=0;ch[j];k++,j++) {
           r[k]=ch[j];
    }
    printf("k:%d\n",k);
    r[k]='\0';

    printf("s:%s r:%s\n",s,r);
    for(k=0;s[k];k++)  { 
        if(sh[k]==s[k]) {
            continue;
            //printf("substring found in s[k]\n");
        } else {
            break;
        }
    }

    if(s[k] == '\0') {
        printf("ss found in s[k]\n");
    } else {
        printf("ss not found in s\n");
    }

    for(v=0;r[v];v++) {
        if(sh[v]==r[v]) {
            printf("sh[v]: %c r[v]: %c \n", sh[v], r[v]);
            continue;
        } else {
            break;
        }
    }

    if(r[v] == '\0') {
        printf("ss found in r[k]\n");
    }

return 0;
}
