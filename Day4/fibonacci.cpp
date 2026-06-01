#include<iostream>
using namespace std;

int main(){
    int firstTerm=0;
    int secondTerm=1;
    int next;
     
    int num;
    cout<<"Enter the term:";
    cin>>num;

    if(num==0||num==1){
        return num;
    }

    for(int i=2;i<=num;i++){ 
        next=firstTerm+secondTerm;
        firstTerm=secondTerm;
        secondTerm=next;
    
    }
    cout<<secondTerm;

    return 0;
}