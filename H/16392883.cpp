#include<iostream>
using namespace std;
int arr[1005];
int main()
{
	int n;
	while(cin>>n)
	{
		int tmp = n;
        int cnt = 0;
        int ans = 0;
        while(tmp)
        {
        	arr[cnt]=tmp%2;
			if(arr[cnt] == 1){
                ans++;}
            tmp/=2;
            cnt++;
        }
        cout<<"The parity of ";
        for(int i = cnt - 1; i >= 0; i--)
		{
            cout<<arr[i];
		}
		cout<<" is "<<ans<<" (mod 2)."<<endl;
	}
	return 0;
}