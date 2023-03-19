#include<iostream>
using namespace std;


int digit(int n){
    int digit;
    while(n>0){
         digit=n%10;
         n=n/10;

    }
    return digit;
}


int main(){
    int n;
    cin>>n;
    int rev=digit(n);
    cout<<rev;

}