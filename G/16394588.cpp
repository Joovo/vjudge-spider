# include <iostream>
using namespace std;
int main()
{
	int T,N,a=150,b=200,B=150;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
		cin>>N;
		if(N<150)
		cout<<N<<endl;
		else if(N%150<50)
		cout<<N%150<<endl;
		else if(N%200<50)
		cout<<N%200<<endl;
		else if(N%350<50)
		cout<<N%350<<endl;
		else
		{
			for(int j=1;j<=N/150;j++)
			{
				for(int k=1;k<=N/150;k++)
				{
					if(N-a*j-b*k<150)
					break;
					if(N-a*j-b*k<=B)
				    {
					    B=N-a*j-b*k;
			    	}
				}
			}
			cout<<B<<endl;
			B=150;
		}
	}
	
	return 0;
}