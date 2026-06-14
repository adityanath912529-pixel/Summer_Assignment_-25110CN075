#include<iostream>
using namespace std;
int main(){
    int n;
    bool isDuplicate=false;
cout<<"Enter the array size:";
cin>>n;
 

int arr[n];

cout<<"Enter the array element: ";
cout<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<"Duplicate element: ";
for(int i=0;i<n;i++){


bool isPrinted=false;
for(int k=0;k<i;k++){
    if(arr[i]==arr[k]){
        isPrinted=true;
        break;
    }

} 

 if(isPrinted)
 continue;
 
    int count=0;
    for(int j=i+1;j<n;j++){
        
        if(arr[i]==arr[j]){
            isDuplicate=true;
            count++;
        }   
    } 
    if(count>0){
        cout<<arr[i]<<" ";
    } 

}
if(isDuplicate==false){
    cout<<"Not present";
}


return 0;
}