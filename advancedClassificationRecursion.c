#include<stdio.h>
#include "NumClass.h"
// int isArmstrong(int size,int n,int x,int s);
// int Count(int n);
// int powers(int a, int b);
// int bool(int a,int b);
// int isPalindrome(int n );
// int reverse(int num);
int isArmstrong(int n){
    int temp =n;
    if(temp==0)
    {
        return 0;
    }
    int size=Count(n);
    int x=n;
    int w=0;
    return isArmstrong1(size,n,x,w);
}

int isArmstrong1(int size,int n,int x,int s){
int b=0;
int v=n;
int t;
if(n==0&&x==s){
    b=1;
    return b;
}else if(n==0&&x!=s){
    return b;
}else{
t=v%10;
s=s+powers(t,size);
return isArmstrong1(size,v/10,x,s);

}
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
int reverse(int num,int sum)
{
    int rem;
    if(num!=0){
            rem=num%10;
            sum=sum*10+rem;
            return reverse((num/10),sum);
    }
    return sum;
} 
int isPalindrome(int num)
{
    if(num == reverse(num,0))
    {
        return 1;
    }

    return 0;
}


