// write a code in C to find a number in an array.
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


    int num;
    scanf("%d",&num);
    for(int i=0;i<n;i++)
    {
        if(num == a[i])
        {
            printf("Number %d found at index %d",num,i);
            break;
        }
    }


    return 0;
}




// write a code in C to find a character in an array.
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
   
    int n;
    scanf("%d",&n);
    char a[n];
    for(int i=0;i<=n;i++)
    scanf("%c",&a[i]);


    char value;
    getchar();
    scanf("%c",&value);
    for(int i=0;i<=n;i++)
    {
        if(value == a[i])
        {
            printf("Character %c found at index: %d",value,i-1);
            break;
        }
    }


    return 0;
}
