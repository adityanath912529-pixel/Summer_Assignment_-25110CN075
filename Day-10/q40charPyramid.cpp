#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(int i=1;i<=rows;i++){ 
        char start=65; 
        for(int j=1;j<=rows-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){ 
            cout<<start;
            start++;
        }
        for(int j=i-1;j>=1;j--){
            start=65+j-1;
            cout<<start;
            start--;
        }
        
        cout<<endl;
    }
    return 0;
}