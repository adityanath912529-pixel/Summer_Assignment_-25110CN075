#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    float average;
cout<<"Enter the array size:";
cin>>n;

int arr[n];

cout<<"Enter the array element: ";
cout<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    sum+=arr[i];
}

cout<<"The sum of array element :"<<sum;
cout<<endl;
average=sum/n;
cout<<"The average of given array:"<<average;


return 0;
}