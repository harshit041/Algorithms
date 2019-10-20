#include <iostream>
using namespace std;
void swap(int *xp,int*yp){
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}




void bubblesort(int arr[], int n){
    bool swapped;
    swapped =false;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(&arr[j],&arr[j+1]);
                    swapped=true;
                }
            
        }
        if(swapped==false){
            break;
        }
    }
    
}





int main() {
 int n;            
    cin>>n;
     int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubblesort(arr,n);
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
	
	
	
	
	return 0;
}
