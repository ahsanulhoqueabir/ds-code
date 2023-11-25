// write a code in c to find minimum number in an array
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
   
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);


    int min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    printf("%d",min);




    return 0;
}
