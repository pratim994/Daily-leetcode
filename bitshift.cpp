#include<iostream>
using namespace std;


bool isAPowerOfTwo(int n ){
    return n>0 && (n&(n-1))==0 ;

}

int main(){
    int n;
    cout<<"enter the number you wanna check";
    cin>>n;

   cout<< (isAPowerOfTwo(n)? "yes its a power of two" : "no its not power of two") << endl;


    return 0;

}
//very important problem as it had appeared on google, facebook and snapchat//
