#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n1,n2;
cout<<"Enter the  first array size:";
cin>>n1;
int arr[n1];
cout<<"Enter the  first array element: ";
cout<<endl;
for(int i=0;i<n1;i++){
    cin>>arr[i];
}

cout<<endl;
cout<<"Enter the  second array size:";
cin>>n2;

int arr1[n2];

cout<<"Enter the  second array element: ";
cout<<endl;
for(int i=0;i<n2;i++){
    cin>>arr1[i];
}
cout<<endl;
sort(arr,arr+n1);
sort(arr1,arr1+n2);

    

    int i= 0,j= 0;

    while(i<n1&&j<n2){

        if(i>0&&arr[i]==arr[i-1]){
            i++;
            continue;
        }

        if(j>0&&arr1[j]==arr1[j-1]){
            j++;
            continue;
        }

        if(arr[i]<arr1[j]){
            cout<<arr[i]<< " ";
            i++;
        }
        else if(arr[i]>arr1[j]){
            cout<<arr1[j]<<" ";
            j++;
        }
        else{
            cout<<arr[i]<<" ";
            i++; j++; }
    }

    while(i<n1){
       if(arr[i]!=arr[i-1])
           cout<<arr[i]<< " ";
        i++;
   }

    while(j<n2){
        if(arr1[j]!= arr1[j-1])
            cout<<arr1[j]<<" ";
        j++;
    }

    return 0;
}
