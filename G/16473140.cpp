#include<iostream>
using namespace std;
int main(){
	int T,N,a,b,c,d;
	cin>>T; if (T>=1&&T<=100){
	for(int i=0;i<T;i++){
		cin>>N;if(N>=1&&N<=10000){
		a=N%350%150;
		b=N%200%150;
		c=N%350%200;
		d=N%150;
		if(N%150==0||N%200==0||N%350==0||a==0||b==0||c==0){
		cout<<0<<endl;
		continue;}
		if(a<b&&a<c&&a<d){
			cout<<a<<endl;
			continue;
		}
		else if(b<c&&b<a&&b<d){
			cout<<b<<endl;
			continue;
		}
		else if(c<a&&c<b&&c<d){
			cout<<c<<endl;
			continue;
		}
		else if(d<a&&d<b&&d<c){
			cout<<d<<endl;
			continue;
		}
		else if(a==b&&a<c&&a<d){
			cout<<a<<endl;
			continue;
		}
		else if(a==c&&a<b&&a<d){
			cout<<a<<endl;
			continue;
		}
		else if(a==d&&a<b&&a<c){
			cout<<a<<endl;
			continue;
		}
		else if(b==c&&b<a&&b<d){
			cout<<b<<endl;
			continue;
		}
		else if(b==d&&b<a&&b<d){
			cout<<b<<endl;
			continue;
		}
		else if(c==d&&c<a&&c<b){
			cout<<c<<endl;
			continue;
		}
		else if(a==b==c&&a<d){
		cout<<a<<endl;
		continue; }
		else if(b==c==d&&b<a){
			cout<<a<<endl;
			continue;
		}
		else if(a==c==d&&a<b){
			cout<<a<<endl;
			continue;
		}
		else if(a==b==d&&a<c){
			cout<<a<<endl;
			continue;
		}
		else {
			cout<<a<<endl;
			continue;
		}
}
}
}
	return 0;
} 