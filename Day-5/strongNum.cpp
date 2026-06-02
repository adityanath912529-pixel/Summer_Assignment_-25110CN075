#include<iostream>
using namespace std;
 
int main(){
    int num,rem,fact,sum=0;

    cout<<"Enter the number:";
    cin>>num;

    int originalNum=num;

    while(num>0){
        rem=num%10;
        fact=1;
        for( int i=1;i<=rem;i++){
            fact*=i;
        }
        sum+=fact;
        num/=10;
    }

    if(sum==originalNum){
        cout<<"Given number is strong number.";
} 
else{
    cout<<"Given number is not strong.";
}

return 0;
}