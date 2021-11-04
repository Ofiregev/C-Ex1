#include<stdio.h>
#include "NumClass.h"


int isArmstrong(int n){

    
    int reminder;
    int temp=n;
    int sum=0;
    int count=Count(n);
    while (temp!=0)
    {
    reminder=temp%10;
    sum=sum+powers(reminder,count);
    temp=temp/10;
    }
    return bool(sum,n);

}
int Count(int n){
    int count=0;
    int i;
    for(i=n;i>0;i=i/10){
        count++;
    }
    return count;
}
int powers(int a,int b){
int j;
int s=a;
for(j=b;j>1;j--){
    s=s*a;

}
return s;
}
int bool(int x,int y){
    int b=0;
    if(x==y){
        b=1;
    }
    return b;

}
int isPalindrome(int n){
    int b=1;
    int c=Count(n);
    int arr [c];
    int i;
    int t;
    int v=n;
    for(i=c;i>0;i--){
        t=v%10;
        arr[i-1]=t;
        v=v/10;
    }
    for (int i = 0; i <c; i++)
    {
        if(arr[c-1-i]!=arr[i]){
            b=0;
            break;
        }
    }
       
return b;
}

