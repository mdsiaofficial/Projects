#include <iostream>
#include <string>
using namespace std;

int main(){
    long int a;
    cin>>a;
    int f;
    int i=1;

    /*
    for(i=1; i<=a; i++){
        a=a*i;
    }*/

    while(i<=a){
        a=a*i;
    }
    cout<<a<<endl;
    return 0;
}