1.
#include<stdio.h>
void printn(int ); 
int main()
{
    printn(100);
    return 0;
}
void printn(int n)
{
    if(n>0)
    {
        printn(n-1);
         printf(" %d",n);
    }
}
2.
#include<stdio.h>
void printn(int);
int main()
{
   printn(12);
}
void printn(int n)
{
    if(n>0)
    {
        printf(" %d",n);
        printn(n-1);
    }
}
3.
#include<stdio.h>
void printn(int);
int main()
{
    printn(10);
    return 0;
}
void printn(int n)
{
    if(n>0)
    {
        printn(n-1);
        printf(" %d",2*n-1);
    }
}

4.
#include<stdio.h>
void printn(int );
int main()
{
    printn(10);
}
void printn(int n)
{
    if(n>0)
    {
        printf(" %d",2*n-1);
        printn(n-1);
    }
}
5.
#include<stdio.h>
void printn(int);
int main()
{
    printn(10);
    return 0;
}
void printn(int n)
{
    if(n>0)
    {
        printn(n-2);
        printf(" %d",n);
    }
}
6.
#include<stdio.h>
void printn(int);
int main()
{
  printn(10);
    return 0;
}
void printn(int n)
{
    if(n>0)
    {
        printf(" %d",n);
        printn(n-2);
    }
}    
     
7.
#include<stdio.h>
void printn(int);
int main()
{
  printn(10);
    return 0;
}
void printn(int n)
{
    if(n>0)
    {
        printn(n-1);
        printf(" %d",n*n);
    }
}    
     
8.
#include<stdio.h>
void binary(int);
int main()
{
    binary(12);
    return 0;
}
void binary(int n)
{
    if(n>0)
    {
     binary(n/2);
        printf(" %d",n%2); 
    }
}
9.
#include<stdio.h>
void binary(int);
int main()
{
    binary(12.65);
    return 0;
}
void binary(int n)
{
    if(n>0)
    {
     binary(n/8);
        printf(" %d",n%8); 
    }
}
10.
#include<stdio.h>
void rev(int);
int main()
{
    int n=123;
    rev(n);
    return 0;
}
int sum=0,rem;
void rev(int n)
{
    if(n>0)
    {
        rem=n%10;
        sum=sum*10+rem;
        rev(n/10);
        printf("%d",sum);
    }
}                                                                                   
