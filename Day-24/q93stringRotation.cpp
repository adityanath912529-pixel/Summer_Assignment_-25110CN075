#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){


    string str1;
    string str2;
    cout<<"Enter the first word :";
    cin>>str1;

    cout<<"Enter the second word: ";
    cin>>str2;
    if(str1.length()==str2.length()){

        string temp=str1+str1;
        if(temp.find(str2)!=string::npos){
            cout<<"String is rotation";
        }
        else {
            cout<<"String is not rotation";
        }
    }
    else{
        cout<<"String is not rotation";
    }

return 0;
}