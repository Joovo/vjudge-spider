#include <iostream>
#include <cstdio>


int main()
{
    int n;
    while(scanf("%d",&n)&&n!=0)
    {
        int cn=0;
        int a[10001],i;
        i=0;
        while(n!=0)
        {
            a[i]=n%2;
            if(a[i]==1)
                cn++;
            n=n/2;
            i++;
        }
        printf("The parity of ");
        int j;
        for(j=i-1; j>=0; j--)
            printf("%d",a[j]);
        printf(" is %d (mod 2).\n",cn);
    }
    return 0;
}