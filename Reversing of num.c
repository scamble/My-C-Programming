#include<stdio.h>
int main(){
    int num=1231,rev=0;
    while(num !=0){
        rev = rev*10+num%10;
        num/=10;
    }
    printf("reversed number = %d\n",rev);
    if(num=rev){
        printf("The Given Number is a palindrome");
    }
    else{
        printf("the given number is not a palindrome");
    }

    return 0;
}