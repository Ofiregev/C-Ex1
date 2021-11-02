#include<stdio.h>
#include "NumClass.h"
int isPrime(int t){
int i,b;
b=1;
if(t<2){
    return 0;
}
for(i=2;i<=(t/2);++i){
    if(t%i==0){
        b=0;
        break;
    }
}
return b;
}

int isStrong(int n){
    int b=0;
    int s=0;
    int c=n;
    int t;
    while(c!=0){
        t=c%10;
        s=s+factor(t);
        if(s==n){
            b=1;
            break;
        }
        c=c/10;
    }
    return b;
}
int factor(int f){
    if(f== 1 || f == 0 ) return 1;
    else return f*factor(f-1);
    
}
