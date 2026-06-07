#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(int i=1;i<=rows;i++){
        
        for(int j=1;j<=i;j++){
            cout<<" ";
        }

        for(int j=1;j<=(2*rows-2*(i-1)-1);j++){
            cout<<"*";
        }

        cout<<endl;
    }
    return 0;

}