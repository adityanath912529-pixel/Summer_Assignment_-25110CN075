#include<iostream>
#include<algorithm>
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



for(int i=0;i<n;i++){

int maxIndex=i;

    for(int j=i+1;j<n;j++){
        if(arr[j]>arr[maxIndex])
        {
            maxIndex=j;
        }
            
    }
    swap(arr[i],arr[maxIndex]);
    
}

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}


return 0;
}