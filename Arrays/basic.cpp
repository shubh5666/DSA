#include<iostream>
using namespace std;
int main(){
  int arr[5]={2,5,67,89,24};
  arr[2] = 10;
  for(int i=0;i<=5;i++){
    cout<<arr[i]<<" ";
  }
}