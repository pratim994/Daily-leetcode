
#include<iostream>
using namespace std;

bool isAPowerOfThree(int n){
    return (n==1)?1:((n<0 || n%3)?0:isAPowerOfThree(n/3));
}

int main(){
   
   int n;
   cout<<"enter the number you wanna check:  ";
   cin>>n;
   cout<< (isAPowerOfThree(n)?"yes it is a power of three":"no it is not a power of three");
   
   
   
   
    return 0;

}