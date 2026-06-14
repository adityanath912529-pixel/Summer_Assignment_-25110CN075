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
int k;
cout<<"Enter the element position shifted to left: ";
cin>>k;
k=k%n;
//first reverse the whole array
int i=0;
int j=n-1;
int temp;
while(i<j){
     temp=arr[i];
     arr[i]=arr[j];
     arr[j]=temp;
     i++;
     j--;
} 


int start=0;
int mid=n-k-1;
while(start<mid){
    temp=arr[start];
    arr[start]=arr[mid];
    arr[mid]=temp;
    start++;
    mid--;
}

 mid=n-k;
int end=n-1;
while(mid<end){
    temp=arr[mid];
    arr[mid]=arr[end];
    arr[end]=temp;
    mid++;
    end--;
}

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}



return 0;
}