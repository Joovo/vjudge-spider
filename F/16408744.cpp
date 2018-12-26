#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

int main(){
    int x,y,z;
    int num;
    cin>>num;
    for(x=1;x<101;x++){
        for(int y=x;y<101;y++){
            for(int z=y;z<101;z++){
                if(x*x+y*y+z*z==num){
                    cout<<x<<' '<<y<<' '<<z;
                    break;
                }
            }
        }
    }
    return 0;
}