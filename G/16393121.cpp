# include <iostream>
using namespace std;
int main()
{
	int T,N,a=150,b=200,B=150,x,y;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
		cin>>N;
		if(N<350)
	    {
			if(N<150)
			cout<<N;
			else if(N<200)
			cout<<N-150;
			else
			cout<<N-200;
		}
		else
		{
		    for(int j=1;j<=N/150;j++)
		    {
		        for(int k=1;k<=N/150;k++)
			    {
				    if(N-a*j-b*k<=B)
				    {
					    B=N-a*j-b*k;
			    	}
			    }
		    }
		cout<<B<<endl;
	    }
	}
	
	return 0;
}