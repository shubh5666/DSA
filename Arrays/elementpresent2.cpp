#include<iostream>
using namespace std;
int main() {
    int size;
    cout<<"Enter the size of array :";
    cin>>size;
    int arr[100];
    cout<<"The arrays are : ";
    for(int i=0;i<=size;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the number : ";
    cin>>x;
    for(int i=0;i<=size;i++){
        if(arr[i]==x){
            cout<<" The array is Present  ";
        }
        
    }
}