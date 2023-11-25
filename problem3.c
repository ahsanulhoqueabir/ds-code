// write a program in C to reverse a number in an array.


#include<stdio.h>
#include<math.h>
#include<string.h>


int reverse(int number)
{
    int rev=0;
    while(number>0)
    {
        rev = rev*10 + number%10;
        number = number/10;
    }
    return rev;
}


int main()
{
   
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);


    for(int i=n-1;i>=0;i–-)
    {
         printf("%d ",a[i]);
    }


    return 0;
}
