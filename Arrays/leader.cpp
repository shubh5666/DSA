#include<iostream>
using namespace std;
int main(){
    int arr[5] = {6,4,5,1,2};
   int n = sizeof(arr)/sizeof (arr[0]);
    int max_side_smaller = arr[n-1];
    cout<<max_side_smaller<<" ";
    for(int i=n-2;i>=0;i--){
        if(arr[i] > max_side_smaller){
            max_side_smaller = arr[i];
             cout<<max_side_smaller<<" ";
        }
    }
   
}