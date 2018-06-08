#include<iostream>
#include<stdio.h>

unsigned long long gcd(unsigned long long a,unsigned long long b)
{
    if(a==b)
        return a;
    else if(a>b)
    {
        a=a%b;
        if(a==0)
            return b;
        else
            gcd(b,a);
    }
    else
        gcd(b,a);
}
int main()
{
    int num;
    unsigned long long a=0,b=0;
    unsigned long long tmpa,tmpb;
    unsigned long long GCD;
    int first;
    while(scanf("%d",&num)!=EOF)
    {
     first=num;
    while(num>0)
    {
        scanf("%ld %ld",&tmpa,&tmpb);
        GCD=gcd(tmpa,tmpb);
        tmpa=tmpa/GCD;
        tmpb=tmpb/GCD;
        if(first==num)
        {
            a=tmpa;
            b=tmpb;

        }
        else
        {
            a=a*tmpb+b*tmpa;
            b=b*tmpb;
            GCD=gcd(a,b);
            a=a/GCD;
            b=b/GCD;
        }
        num--;
    }
    printf("%ld/%ld\n",a,b);
    }
}
