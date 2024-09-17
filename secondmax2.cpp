#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of Arrays :";
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int largest = arr[0];
    for(int i=1;i<size;i++){
      if(arr[0]<arr[i]){
        largest= arr[i];
      
      }
  
}
cout<<"Largest number is : ";
    cout<<largest;
    int smax = arr[0];
    for(int i=1;i<size;i++){
           if( largest!= arr[i] && smax <arr[i]){
            smax = arr[i];
           }
        
    }
    cout<<endl;
    cout<<"Second largest number is :";
    cout<<smax;
    int thirdmax = arr[0];
for(int i=1;i<size;i++){
    if(largest!= arr[i] && smax!= arr[i] && thirdmax < arr[i]){
        thirdmax = arr[i];
    }
}
cout<<endl;
cout<<"Third largest number is : ";
cout<<thirdmax;
}