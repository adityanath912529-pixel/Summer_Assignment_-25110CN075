# include<iostream>
using namespace std;
int rev=0;
int reverseNum(int n){
    if(n==0)
    return rev;

    int rem=n%10;
    rev=rev*10+rem;
    n/=10;
    return reverseNum(n);
}

int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    cout<<"Reverse: "<<reverseNum(num);

    return 0;

}