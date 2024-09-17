#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the size of array :";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
//int max;
int max = INT16_MIN;
for(int i=0;i<n;i++){
    if(max<arr[i]){
        max = arr[i];
    }
    int smax=INT16_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=max && smax<arr[i])
            smax = arr[i];
    }
      cout<<max<<endl;
        cout<<smax;
}

    
}