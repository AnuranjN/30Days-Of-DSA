#include<iostream>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i=0; i<=n-2; i++){
        int mini=i;
        for(int j=i; j<=n-1; j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[mini],arr[i]);
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
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}