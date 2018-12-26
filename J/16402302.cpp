#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f,sum=0,cBox,arr1,arr2;
	while(cin>>a>>b>>c>>d>>e>>f)
	{
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)
		break;
		sum=0;
		sum=sum+d+e+f;
		int cNum=c%4;//c剩下几个
		if(cNum!=0)
		cBox=c/4+1;//c所用的箱子
		else
		cBox=c/4;
		int bPut;
		sum=sum+cBox; 
		switch(cNum)
		{
			case 1:bPut=5;break;
			case 2:bPut=3;break;
			case 3:bPut=1;break;
			default:break;
		}
		if(b>bPut+4*d)
		{
			int m=(b-bPut-4*d)%6;
			if(m!=0)
			arr1=(b-bPut-4*d)/6+1;
			else
			arr1=(b-bPut-4*d)/6;
			sum=sum+arr1;
		}
		int num=4*b+9*c+16*d+25*e+36*f;
		if(a>36*sum-num)
		{
			int n=(36*sum-num)%36;
			if(n!=0)
			arr2=(36*sum-num)/36+1;
			else
			arr2=(36*sum-num)/36;
			sum=sum+arr2;
		}
		cout<<sum<<endl;
	}
}