#include<iostream>
using namespace std;
int main(){
    int n;
    bool isRepeat=false;
cout<<"Enter the array size:";
cin>>n;
 

int arr[n];
int prevCount=0;
int element=arr[0];

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
            if(count>prevCount){
                prevCount=count;
                element=arr[i];
                isRepeat=true;
            }
        }   
    } 
   

}
if(isRepeat){
cout<<"Maximum frequency of element "<<element<<" :"<<prevCount;}
else{
    cout<<" No element repeat ";
}

return 0;
}