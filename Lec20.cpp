#include<bits/stdc++.h>

using namespace std;

int main(){

int n,i,j;
bool swapped;
int arr[500];
cout<<"ENTER SIZE ";
cin>>n;
 for(i=0;i<n;i++){
cin>>arr[i];
 }
 for(i=n-2;i>=0;i--){
    swapped=0;
    for(j=0;j<=i;j++){


        if(arr[j]>arr[j+1]){

         swap(arr[j+1],arr[j]);
            swapped =1;
        }
    }

    if(swapped==0){
        break;
    }
 }

 for(i=0;i<n;i++){
cout<<arr[i]<<" ";
}
}