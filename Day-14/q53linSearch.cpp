#include<iostream>
using namespace std;
int main(){
    int n,target;
    bool search=false;
cout<<"Enter the element to be searched:";
cin>>target;
cout<<"Enter the array size:";
cin>>n;

int arr[n];

cout<<"Enter the array element: ";
cout<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    if(arr[i]==target){
        search=true;
    }
}

if(search){
    cout<<"Element found ";
}
else{
    cout<<"Element not found";
}


return 0;
}