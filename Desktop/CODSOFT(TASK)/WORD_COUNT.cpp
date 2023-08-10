#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter a sentence : ";
    string s;getline(cin,s);
    cout<<"Enter a word which you have to count : ";
    char a;cin>>a;
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==a){
            cnt++;
        }
    } 
    cout<<"The total '"<<cnt<<"' word present in this sentence" ;
}