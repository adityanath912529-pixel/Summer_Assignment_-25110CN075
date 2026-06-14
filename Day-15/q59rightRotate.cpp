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

int k;
cout<<"Enter the element position shifted to right :";
cin>>k;
k=k%n;

//first reverse the whole array
int i=0;
int j=n-1;
while(i<j){
    swap(arr[i],arr[j]);
    i++;
    j--;
}

// then reverse first k element
i=0;
j=k-1;
while(i<j){
    swap(arr[i],arr[j]);
    i++;
    j--;
}

// then reverse after k element
i=k;
j=n-1;
while(i<j){
    swap(arr[i],arr[j]);
    i++;
    j--;
}

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}


return 0;
}