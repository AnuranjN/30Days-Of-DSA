//Print number n times in reverse using recursion
#include<iostream>
using namespace std;

void name(int i,int N){
    if(i<1){
        return;
    }
    cout<<i<<endl;;
    name(i-1,N);
}

int main(){
    int N;
    cin>>N;

    name(N,N);
}