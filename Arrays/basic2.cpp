// #include<iostream>
// using namespace std;
// int  main(){
//    int arr[7];
//    //input from user
// for(int i=0;i<=7;i++){
//    cin>>arr[i];
// }
// //printing
// for(int i=0;i<=6;i++){
//    cout<<arr[i]<<" ";
// }
// }


#include<iostream>
using namespace std;
int main(){
   int size;
   cout<<"Size of the array is : ";
   cin>>size;
   int arr[100];
   cout<<"Arry taken from the user :";
   for(int i=0;i<=size;i++){
      cin>>arr[i];
   }
   cout<<"Output of Array is :";
   for(int i=0;i<=size;i++){
      
      cout<<arr[i]<<" ";
   }
}