#include<iostream>
using namespace std;

void name(int i,int N){
    if(i<1){
        return;
    }
    
    name(i-1,N);
    cout<<i<<endl;
}

int main(){
    int N;
    cin>>N;

    name(N,N);
}