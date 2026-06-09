#include<iostream>
using namespace std;
#include<cmath>

void isArmstrong(int num){
    int countDigit=0,rem,armstrong=0;

    if(num==0){
        cout<<"Given number is armstrong";
    }

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
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    isArmstrong(num);
}