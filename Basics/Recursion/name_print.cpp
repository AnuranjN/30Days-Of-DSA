//Print name n times using recursion
#include<iostream>
using namespace std;

void name(int i,int N){
    if(i>N){
        return;
    }
    cout<<"Anu"<<endl;;
    name(i+1,N);
}

int main(){
    int N;
    cin>>N;

    name(1,N);
}