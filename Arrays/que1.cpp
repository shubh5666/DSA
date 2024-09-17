// // given array of mark of student,if mark of any student less than 35 print rollno.(rollno. refer to the index of array).
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of student :";
//     cin>>n;
//     int marks[n];
//     cout<<"Enter the marks :";
//     for(int i=0;i<=n-1;i++){
//         cin>>marks[i];
//     }   
//     for(int i=0;i<n-1;i++){
// if(marks[i]<35){
//    cout<<i<<" ";

//     }
//     }
  
    
    
// }
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the number of student :";
    cin>>size;
    int marks[size];
    cout<<"Enter the marks of student : ";
    for(int i=0;i<=size;i++){
        cin>>marks[i];
    }
    for(int i=0;i<=size;i++){
        if(marks[i]<35){
            cout<<i<<endl;
            cout<<"Fail"<<endl;
        }
        
    }
}