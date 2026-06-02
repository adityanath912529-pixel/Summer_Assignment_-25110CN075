#include<iostream>
using namespace std;

int main(){
    int num,sum=0;

    cout<<"Enter the number:";
    cin>>num;
    cout<<endl;
int original=num;
for(int i=1;i<=num/2;i++){
    if(num%i==0){
        sum+=i;
    }}
    
    if(original==sum){
        cout<<"Given number is perfect.";
    }

    else{
        cout<<"Given number is not perfect.";
    } 

return 0;
}