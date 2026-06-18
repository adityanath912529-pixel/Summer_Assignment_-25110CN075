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

int target;
cout<<"Enter the target ";
cin>>target;
 
sort(arr,arr+n);

bool isFound=false;

int low=0,high=n-1;
while(low<=high){
    int mid=low+(high-low)/2;

    if(arr[mid]==target){
        cout<<"Element found at index :"<<mid;
        isFound=true;
        break;
    }

    else if(arr[mid]>target){
        high=mid-1;
    }
    else{
        low=mid+1;
    }
}

if(!isFound){
    cout<<"No such element exist.";
}

return 0;
}