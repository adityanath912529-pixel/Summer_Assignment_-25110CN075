#include<iostream>
using namespace std;
int main(){
    int n;
cout<<"Enter the array  size:";
cin>>n;

int arr[n];
int even=0,odd=0;

cout<<"Enter the array element: ";
cout<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    if(arr[i]%2==0){
        even++;
    }
    else{
        odd++;

    }
    
}
cout<<"Even element size:"<<even;
    cout<<endl;
    cout<<"Odd element size:"<<odd;


return 0;
}