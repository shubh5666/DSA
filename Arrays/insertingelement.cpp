#include<iostream>
using namespace std;
int main(){
    int arr[6] = { 3,4,5,6,2};
    arr[5]=12;
    arr[2]= 100;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}
