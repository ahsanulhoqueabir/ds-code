// Write a program in c to sort the numbers in an array in ascending order.


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


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }


    for(int i=0;i<n;i++) printf("%d ",a[i]);
   




    return 0;
}


// Write a program in c to sort the numbers in an array descending order.


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


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }


    for(int i=0;i<n;i++) printf("%d ",a[i]);
   




    return 0;
}
