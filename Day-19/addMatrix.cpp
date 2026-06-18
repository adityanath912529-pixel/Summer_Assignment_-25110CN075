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

if(row1==row2&&col1==col2){
    cout<<"Enter the first matrix element : ";
    cout<<endl;
  for(int i=0;i<row1;i++){
    for(int j=0;j<col1;j++){
        cin>>arr1[i][j];
    }
    
  }

    cout<<"Enter the second matrix element : ";
    cout<<endl;
  for(int i=0;i<row1;i++){
    for(int j=0;j<col1;j++){
        cin>>arr2[i][j];
    }
    
  } 
  cout<<endl;



    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cout<<arr1[i][j]+arr2[i][j]<<" ";
        }
        cout<<endl;
    }

}

else {
    cout<<"Sum not possible .";
}
return 0;
}