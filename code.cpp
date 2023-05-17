#include <iostream>
using namespace std;

int main () {

    int a;
    cout<<"enter the value of a";
    cin>>a;

    for(int i=1; i<=10; i++) {
        cout<<"\n"<<a<<" x "<<i<<" = "<<i*a;
    }
     return 0;
}