    #include <iostream>
using namespace std;


int main()
{
	int n;
	cin>>n;
	long i=0,s=0,m,a,j;
	while(i<n)
	{
		i++;
		cin>>m;
		for(j=0;j<m;j++)
		{
			cin>>a;
			s+=a;
		}
		if (i==n-1)
		cout<<s<<endl;
		else
        cout<<s<<endl<<endl;
	}
	return 0;
}
