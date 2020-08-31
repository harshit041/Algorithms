#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Bubblesort(int arr[],int n){
    int i,j;
    bool swapped;
    for(int i=0;i<n-1;i++){
        swapped=false;
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    swapped=true;
                }
            }
        if(swapped==false)
            break;
            
    }
}


void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int size;
    cout<<"Enter The Size Of An Array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter The Elements"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    Bubblesort(arr,size);
    print(arr,size);
    return 0;
}