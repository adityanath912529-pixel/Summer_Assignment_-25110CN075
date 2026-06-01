#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num,countDigit=0,rem,armstrong=0;
    cout<<"Enter the number:";
    cin>>num;
    cout<<endl;

    if(num==0){cout<<"Given number is armstrong";}

   int originalNum=num;
    while(num>0){
        num/=10;
        countDigit++;
    }
num=originalNum;

while(num>0){
    rem=num%10;
    int power=1;
    for(int i=1;i<=countDigit;i++){
        power*=rem;
    }
    armstrong+=power;
    num/=10;
    
}  
if(originalNum==armstrong){
    cout<<"Given number is armstrong";
} 

else{cout<<"Given number is not armstrong";}
 return 0;
}