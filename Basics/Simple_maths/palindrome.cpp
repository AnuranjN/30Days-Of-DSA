#include<iostream>
using namespace std;

int palindrome(int n){
    int dupe=n;
    int digit,rev=0;
    while(n>0){
        digit=n%10;
        rev=(rev*10)+digit;
        n=n/10;
    }
    if(rev==dupe){
        cout<< "Its a palindrome"<< " ";
    }
    else{
        cout<< "Nope buddy not a pali";
    }
    return rev;
    
    
}




int main(){
    int n;
    cin>>n;

    int rev=palindrome(n);
    cout<<rev;
}
