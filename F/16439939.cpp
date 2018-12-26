#include <iostream>
using namespace std;
int main(){
	int x,y,z,a;
	while(cin>>a&&a!=EOF){
	x=y=z=1;
	for(x=1;x*x<a;x++){
		for(y=x;y*y<a;y++){
			for(z=y;z*z<a;z++)
			if(x*x+y*y+z*z==a){
			cout<<x<<" "<<y<<" "<<z<<endl;
		}
		}
	}
	}
}