#include<iostream>
using namespace std;
int main(){
    int n;
cout<<"Enter the array size:";
cin>>n;

int arr[n];

cout<<"Enter the array element: ";
cout<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int i=0;
int j=n-1;
int temp;
while(i<=j){
     temp=arr[i];
     arr[i]=arr[j];
     arr[j]=temp;
     i++;
     j--;
}

for(int i=0;i<n;i++){
    cout<<"Reverse of given array: ";
    cout<<arr[i]<<" ";
}



return 0;
}