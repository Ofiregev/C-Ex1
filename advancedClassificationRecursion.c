#include<stdio.h>
#include "NumClass.h"


int isArmstrongrec(int size,int n,int x,int s){
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
return isArmstrongrec(size,v/10,x,s);

}
}
int recIsPalindrome(int num)
{
    if(num == reverse(num))
    {
        return 1;
    }

    return 0;
}


int reverse(int num)
{
    int rem;
    static int sum=0;
    if(num!=0){
            rem=num%10;
            sum=sum*10+rem;
            reverse(num/10);
    }
        else
            return sum;
    return sum;
} 
