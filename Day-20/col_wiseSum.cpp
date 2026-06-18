#include<iostream>
using namespace std;
int main(){


    int row1,col1;
    int colWiseSum;
cout<<"Enter the row and column of  matrix:";
cin>>row1>>col1;
cout<<endl;

int arr1[row1][col1];


    cout<<"Enter the matrix element : ";
    cout<<endl;
  for(int i=0;i<row1;i++){
    for(int j=0;j<col1;j++){
        cin>>arr1[i][j];
    }
    
  }


  cout<<endl;

    for(int j=0;j<col1;j++){
        colWiseSum=0;
        for(int i=0;i<row1;i++){
            
                colWiseSum+=arr1[i][j];
            
    
        }
        cout<<"Sum of "<<j+1<<"th column :"<<colWiseSum;
        cout<<endl;
    }

return 0;
}