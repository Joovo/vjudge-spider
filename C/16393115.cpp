#include <iostream>
using namespace std;
int main(){

int num1;
cin>>num1;
int i = 1;
int b;
b = num1 +  1;
while(i < num1){



for(int j = 1;j < b+1;j++){
int a = 0;
a = a + j;
cout<<a<<endl; // @suppress("Invalid overload")
cout<<" "<<endl; // @suppress("Invalid overload")
a = 0;
}
i = i + 1;
}

for(int k = 0;k<b;k++){
int c = 0;
c = c + k;
cout<<c<<endl;}

return 0;
}