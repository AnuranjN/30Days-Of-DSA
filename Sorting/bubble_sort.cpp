#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int i=n-1; i>=0; i--){
       
        for(int j=0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
            }
        }
        
    }
}

int main(){
    //declare array size
    int n;
    cin>>n;
    int arr[n];
    //take array input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //output the array
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}