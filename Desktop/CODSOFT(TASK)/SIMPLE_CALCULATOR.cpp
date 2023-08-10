#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter a first number : ";
    int a;cin>>a;
    cout<<"Enter a second number : ";
    int b;cin>>b;
    cout<<"Enter a operation you want like(+,-,*,/) : ";
    char s;cin>>s;
    if(s=='+'){
        cout<<"sum of two number is : ";
        cout<<a+b<<endl;
    }
    else if(s=='-'){
        cout<<"subtract of two number is : ";
        cout<<a-b<<endl;
    }
    else if(s=='*'){
        cout<<"multiply of two number is : ";
        cout<<a*b<<endl;
    }
    else if(s=='/'){
        cout<<"division of two number is : ";
        float c=a/b;
        cout<<c<<endl;
    }
    else{
        cout<<"Plz enter correct operator";
    }
    
}