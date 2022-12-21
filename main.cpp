#include<iostream>
using namespace std;
int main(){
    long long int a;
    cout<<"Enter the Number to know it is odd or even: ";
    cin>>a;
    cout<<endl;
  
  long long int c= a%2;

    if(c==0){
        cout<<"This is a even number";
    }
    else{
        cout<<"This is a odd number";
    }

return 0;
}
