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

int lar=arr[0];
int small=arr[0];
for(int i=0;i<n;i++){
    if(arr[i]>=lar)
    {lar=arr[i];}

else{small=arr[i];}
}

cout<<"largest element:"<<lar;
cout<<endl;
cout<<"smallest element:"<<small;

return 0;
}