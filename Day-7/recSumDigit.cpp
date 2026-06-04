# include<iostream>
using namespace std;
int sum=0;
int sumDigit(int n){
    if(n==0)
    return sum;

    int rem=n%10;
    sum+=rem;
    n/=10;
    return sumDigit(n);
}

int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    cout<<"Sum of digit  "<<sumDigit(num);

    return 0;
}