# Data Structure Assignment


## 01. To find the maximum number from an array.
```
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


    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    printf("%d",max);




    return 0;
}

```

## 02. To find the minimum number from an array.

```
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

```

## 03. To reverse a number and string in an array.

```
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

```

## 04. To find a number or character in an array.

```
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

```

## 05. To sort the numbers in an array (asc/desc).

```
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
```
