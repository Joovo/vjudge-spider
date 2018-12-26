#include<stdio.h>
 
int main()
{
    int N=0,i=0,n1=0,i1=0,a=0,sum=0;
    scanf("%d",&N);
    while(i<N)
    {
        scanf("%d",&n1);
        for(i1=0;i1<n1;i1++)
        {
            scanf("%d",&a);
            sum=sum+a;
        }
        printf("%d\n",sum);
        if(i<(N-1))
            printf("\n");
        sum=0;
        i++;
    }
    return 0;
}
