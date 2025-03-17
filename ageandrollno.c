//Dhayan Muhammed S
#include<stdio.h>
int main()
{
    int rollno,age,encode,decodeage,decoderoll;
    printf("Enter the Roll No and Age of the student : ");
    scanf("%d %d",&rollno,&age);
    encode = rollno ^ age;
    printf("The encoded value of the student is %d\n",encode);
    decodeage = encode ^ rollno;
    printf("The Decoded value of the student is %d",decodeage);
    decoderoll = encode ^ age;
    printf("The Decoded value of the student is %d",decoderoll);
    return 0;
}