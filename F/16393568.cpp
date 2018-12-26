#include <iostream>
using namespace std;
int main (){
	int x,y,z,n;
	while(cin>>n){
		z=0;x=0;y=0;
		for(;n!=x*x+y*y+z*z&&z<100;){
			z++;
			
			for(;n!=x*x+y*y+z*z&&y<100;){
				y++;
				
				for (;n!=x*x+y*y+z*z&&x<100;){
					x++;
					break;
				}
			}
		}
		
		cout<<x<<' '<<y<<' '<<z<<endl;
	}
	return 0;
}