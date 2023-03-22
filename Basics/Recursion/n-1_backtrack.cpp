#include<iostream>
using namespace std;

void name(int i,int N){
    if(i>N){
        return;
    }
    
    name(i+1,N);
    cout<<i<<endl;
}

int main(){
    int N;
    cin>>N;

    name(1,N);
}