#include<iostream>
using namespace std;

int main(){
    int firstTerm=0;
    int secondTerm=1;
    int next;
     
    int num;
    cout<<"Enter the number:";
    cin>>num;

    for(int i=0;i<num;i++){ 
        cout<<firstTerm<<" ";
        next=firstTerm+secondTerm;
        firstTerm=secondTerm;
        secondTerm=next;
    
    }

    return 0;
}
