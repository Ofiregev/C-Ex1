#include <stdio.h>
#include "NumClass.h"

int main()
{
    int i;
    int one;
    int two;
//   printf("Please enter 2 numbers:\n");
    scanf("%d" ,&one);
    scanf("%d" ,&two);
    if(one>two){
        int temp;
        temp=one;
        one=two;
        two=temp;
    }
    printf("The Armstrong numbers are:");
    for(i=one;i<=two;i++){
        if(isArmstrong(i)){
            printf(" %d",i);
        }
    }
    printf("\n");
    printf("The Palindromes are:");
    for(i=one;i<=two;i++){
        if(isPalindrome(i)){
            printf(" %d",i);
        }
    }
     printf("\n");

    printf("The Prime numbers are:");
    for (i = one; i <= two; i++)
    {
        if (isPrime(i))
        {
            printf(" %d", i);
        }
    }
      printf("\n");

    printf("The Strong numbers are:");
    for (i = one; i <= two; i++)
    {
        if (isStrong(i))
        {
            printf(" %d", i);
        }
    }
    
     printf("\n");
    return 0;
}
