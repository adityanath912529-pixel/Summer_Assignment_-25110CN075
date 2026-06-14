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

for(int i=0;i<n;i++){


bool isVisited=false;
for(int k=0;k<i;k++){
    if(arr[i]==arr[k]){
        isVisited=true;
        break;
    }

} 

 if(isVisited)
 continue;
 
    int count=1;
    for(int j=i+1;j<n;j++){
        
        if(arr[i]==arr[j]){
            
            count++;
        }   
    } 
    
        cout<<"Frequency of "<<arr[i]<<" : "<<count;
        cout<<endl;
    } 




return 0;
}