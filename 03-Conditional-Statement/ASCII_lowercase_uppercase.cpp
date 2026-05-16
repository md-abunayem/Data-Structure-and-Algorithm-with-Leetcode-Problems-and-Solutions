#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;

    if(ch>= 65 && ch<=90){
        cout<<ch<<" is a uppercase letter."<<endl;
    }
    else if(ch>=97 && ch<=122){
        cout<<ch<<" is an lowercase letter."<<endl;
    }
    else{
        cout<<ch<<" is not an alphabetic letter."<<endl;
    }

    return 0;
}