#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
int n;
cout<<"Enter the size of name :";
cin>>n;
string word[n];
cout<<"Enter the name :";
cout<<endl;

for(int i=0;i<n;i++){
    cin>>word[i];   
}

for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(word[j]>word[j+1]){
       swap(word[j],word[j+1]);
        }
    }
}


for(int i=0;i<n;i++){
    cout<<word[i]<<" ";   
}

return 0;
}
