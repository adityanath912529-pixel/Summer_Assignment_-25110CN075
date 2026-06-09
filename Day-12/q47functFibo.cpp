#include<iostream>
using namespace std;
#include<cmath>
int Fibo(int num){
    int firstTerm=0;
    int secondTerm=1;
    int next;
     
    

    if(num==0||num==1){
        return 0;
    }

    for(int i=2;i<=num;i++){ 
        next=firstTerm+secondTerm;
        firstTerm=secondTerm;
        secondTerm=next;
    
    }
    return firstTerm;

}

int main(){
    int num;
    cout<<"Enter the term:";
    cin>>num;
    cout<<Fibo(num);
}