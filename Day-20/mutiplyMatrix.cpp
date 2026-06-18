#include<iostream>
using namespace std;
int main(){


    int row1,col1,row2,col2;
cout<<"Enter the row and column of first matrix:";
cin>>row1>>col1;
cout<<endl;

int arr1[row1][col1];

cout<<"Ente the row and column of second matrrix: ";
cin>>row2>>col2;
int arr2[row2][col2];

if(col1==row2){
    cout<<"Enter the first matrix element : ";
    cout<<endl;
  for(int i=0;i<row1;i++){
    for(int j=0;j<col1;j++){
        cin>>arr1[i][j];
    }
    
  }

    cout<<"Enter the second matrix element : ";
    cout<<endl;
  for(int i=0;i<row2;i++){
    for(int j=0;j<col2;j++){
        cin>>arr2[i][j];
    }
    
  } 
  cout<<endl;

int res[row1][col2];

    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            res[i][j]=0;
            for(int k=0;k<col1;k++){
                
                res[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
        cout<<endl;
    }
for(int i=0;i<row1;i++){
    for(int j=0;j<col2;j++){
        cout<<res[i][j]<<" ";
    }
    cout<<endl;
    
  } 


}

else {
    cout<<"Multiplication not possible .";
}




return 0;
}