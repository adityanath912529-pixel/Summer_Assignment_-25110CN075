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
 sort(arr,arr+n);
 cout<<endl;
 cout<<"First missing number :";
for(int i=0;i<n;i++){
    if(arr[i]!=i){
        cout<<i;
        break;
    }
}


return 0;
}