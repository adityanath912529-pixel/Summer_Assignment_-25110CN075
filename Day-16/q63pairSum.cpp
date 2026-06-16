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
cout<<"Enter the target :";
cin>>target;

sort(arr,arr+n);

bool isPresent=false;
int i=0;
int j=n-1;
while(i<j){
    int sum=arr[i]+arr[j];
    if(sum==target){
        cout<<" Pair of element present";
        isPresent=true;
        break;
    }
    else if(sum>target){
        j--;
    }
    else{
        i++;
    }
}
if(isPresent==false){
    cout<<"No such pair exist.";
}


return 0;
}