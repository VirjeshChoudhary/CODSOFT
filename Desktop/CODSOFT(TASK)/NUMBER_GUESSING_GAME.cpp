#include <bits/stdc++.h>
using namespace std;
int main(){
    srand((unsigned int)time(NULL));
    int random_no=(rand()%10)+1;
    cout<<"You have to guess a number between 1 to 10 and check its right or wrong"<<endl;
    int guess_no;
    do{
    cout<<"Enter a number : ";
    cin>>guess_no;
    // cout<<endl;
    if(guess_no>random_no){
        cout<<"plz guess a smaller number"<<endl;
    }
    else if(guess_no<random_no){
        cout<<"plz guess a higher number"<<endl;
    }
    else{
        cout<<"You Won"<<endl;
    }
    
    }while(random_no!=guess_no);
    
}