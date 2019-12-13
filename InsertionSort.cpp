#include<bits/stdc++.h>
using namespace std;

void insertionSort2(int arr[], int n) {
    int i;
    int j;
    int key;
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
        
    }


}

void prt(int arr[],int n){
    for(int k=0;k<n;k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionSort2(arr,n);
    prt(arr,n);
    return 0;
}