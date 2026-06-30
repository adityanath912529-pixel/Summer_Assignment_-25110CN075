#include<bits/stdc++.h>
using namespace std;

class Library{
    private:
    int bookId;
    string title;
    string author;
    bool issued;


    public:
    Library(){
        
        title="";
        author="";
        issued=false;
    }
    void addBook(){
        cout<<"Enter book Id: ";
        cin>>bookId;
        cin.ignore();
        cout<<"Enter book title: ";
        getline(cin,title);

        issued=false;

        cout<<"\n Book Added Successfully.";
    }

    void displayBook(){
        cout<<"\n Book ID : "<<bookId<<endl;
        cout<<"Title  :"<<title<<endl;
        cout<<"Author :"<<author<<endl;
        cout<<"Status: "<<(issued ? "Issued":"Available");
    }

    void issueBook(){
        if(issued){
            cout<<"Book is already issued. \n";
        }
        else{
            issued=true;
            cout<<"Book Issued Successful";
        }
    }

    void returnBook(){
        if(!issued){
            cout<<"Book is already available. \n";
        }
        else{
            issued=false;
            cout<<"Book returned successfully \n";
        }
    }
    

};

int main(){
    Library book;
    int choice;

    do{
        cout<<"\n ====Library Management System====\n";
        cout<<"1.Add Book\n ";
        cout<<"2.Display Book\n ";
        cout<<"3.Issue Book\n ";
        cout<<"4.Return Book\n ";
        cout<<"5.Exit \n ";
        cout<<"Enter your choice:";
        cin>>choice;

        if(choice==1){
            book.addBook();
        }

        else if(choice==2){
            book.displayBook();
        }
        else if(choice==3){
            book.issueBook();
        }

        else if(choice==4){
            book.returnBook();
        }

        else if(choice==5){
            cout<<"Thank you";

        }
        else{
            cout<<"Invalid choice";
        }


    }
    while(choice!=5);
    return 0;
}