#include<iostream>
#include<climits>
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

int lar=INT_MIN;
int secLargest=INT_MIN;

for(int i=0;i<n;i++){
    if(arr[i]>lar){
        secLargest=lar;
        lar=arr[i];
    }

    else if(arr[i]>secLargest && arr[i]!=lar){
        secLargest=arr[i];
    }
}

cout<<"The second largest element: "<<secLargest;


return 0;
}