#include<bits/stdc++.h>
using namespace std;

class StringSystem{
    string str;

public:
    void input(){
        cin.ignore();
        cout<<"Enter string: ";
        getline(cin,str);
    }

    void display(){
        cout<<"String: "<<str<<endl;
    }

    void length(){
        cout<<"Length = "<<str.length()<<endl;
    }
    void reverseString(){
        string temp=str;
        reverse(temp.begin(),temp.end());
        cout<<"Reversed String: "<<temp<<endl;
    }

    void upperCase(){
        string temp=str;
        for(int i=0;i<temp.size();i++)
            temp[i]=toupper(temp[i]);
        cout<<"Uppercase: "<<temp<<endl;
    }
};
  

int main(){
       StringSystem s;
    int choice;
      do{
        cout<<"\n1.Input String\n2.Display String\n3.Length\n4.Reverse\n5.Uppercase\n6.Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;
        switch(choice){
            case 1: s.input(); break;
            case 2: s.display(); break;
            case 3: s.length(); break;
            case 4: s.reverseString(); break;
            case 5: s.upperCase(); break;
            case 6: cout<<"Thank You"<<endl; break;
            default: cout<<"Invalid Choice"<<endl; }
    }while(choice!=6);



    return 0;
}
