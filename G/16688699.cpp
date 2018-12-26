#include<stdio.h>
#include<string.h>
#define MAXN 10000
int c1[MAXN],c2[MAXN];
int v[3];
void mufun(int sum,int *v)
{
    int i,j,k;
    for(i=0;i<=MAXN;i+=v[0])
         c1[i]=1;
    for(k=1;k<sum;k++)
    {
        for(i=0;i<=MAXN;i++)
        {
            for(j=0;i+j<=MAXN;j+=v[k])
               c2[i+j]+=c1[i];
        }    
        for(i=0;i<=MAXN;i++)
        {
            c1[i]=c2[i];
            c2[i]=0;
        }    
    }    
}  
int main()
{
    int n,T;
    v[0]=150;
    v[1]=200;
    v[2]=350;
    memset(c1,0,sizeof(c1));
    memset(c2,0,sizeof(c2));
    mufun(3,v);
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        int cnt=0;
        while(c1[n-cnt]==0)
        {
            cnt++;
        }  
        printf("%d\n",cnt);  
    }
    return 0;    
}    