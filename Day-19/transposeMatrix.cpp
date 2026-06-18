#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int diagonalSum=0;


    int row1,col1;
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



    for(int i=0;i<row1;i++){
        for(int j=i+1;j<col1;j++){
            swap(arr1[i][j],arr1[j][i]);
            
        }
        
    }

    for(int i=0;i<row1;i++){
    for(int j=0;j<col1;j++){
        cout<<arr1[i][j]<<" ";
    }
    cout<<endl;
    
  }
    


return 0;
}