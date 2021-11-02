#include <stdio.h>
#include "NumClass.h"

int main()
{
    int i;
    int one;
    int two;
    scanf("%d" ,&one);
    scanf("%d" ,&two);
    while(one<0||two<0){
    scanf("%d" ,&one);
    scanf("%d" ,&two);
    }
    if(one>two){
        int temp;
        temp=one;
        one=two;
        two=temp;
    }
       printf("\n");
    printf("The Armstrong numbers are:");
    for(i=one;i<=two;i++){
        if(isArmstrongrec(Count(i),i,i,0)){
            printf("%d ",i);
        }
    }
    printf("\n");
    printf("The Palindromes are:");
    for(i=one;i<=two;i++){
        if(isPalindrome(i)){
            printf("%d ",i);
        }
    }
     printf("\n");

    printf("The Prime numbers are:");
    for (i = one; i <= two; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
      printf("\n");

    printf("The Strong numbers are:");
    for (i = one; i <= two; i++)
    {
        if (isStrong(i))
        {
            printf("%d ", i);
        }
    }
    
     printf("\n");
    return 0;
}
