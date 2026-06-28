#include<bits/stdc++.h>
using namespace std;

class Contact{
private:
    string name;
    string phoneNumber;
    string email;

public:
    Contact(){
        name = "";
        phoneNumber = "";
        email = "";
    }

    void addContact(){
        cin.ignore();

        cout<<"Enter Name: ";
        getline(cin, name);

        cout<<"Enter Phone Number: ";
        getline(cin, phoneNumber);

        cout<<"Enter Email: ";
        getline(cin, email);

        cout<<"\nContact Added Successfully.\n";
    }

    void displayContact(){
        cout<<"\nName : "<<name<<endl;
        cout<<"Phone Number : "<<phoneNumber<<endl;
        cout<<"Email : "<<email<<endl;
    }

    void updateContact(){
        cin.ignore();

        cout<<"Enter New Name: ";
        getline(cin, name);

        cout<<"Enter New Phone Number: ";
        getline(cin, phoneNumber);

        cout<<"Enter New Email: ";
        getline(cin, email);

        cout<<"Contact Updated Successfully.\n";
    }

    void deleteContact(){
        name = "";
        phoneNumber = "";
        email = "";

        cout<<"Contact Deleted Successfully.\n";
    }
};

int main(){

    Contact contact;
    int choice;

    do{
        cout<<"\n===== Contact Management System =====\n";
        cout<<"1. Add Contact\n";
        cout<<"2. Display Contact\n";
        cout<<"3. Update Contact\n";
        cout<<"4. Delete Contact\n";
        cout<<"5. Exit\n";
        cout<<"Enter Your Choice: ";
        cin>>choice;

        if(choice==1){
            contact.addContact();
        }
        else if(choice==2){
            contact.displayContact();
        }
        else if(choice==3){
            contact.updateContact();
        }
        else if(choice==4){
            contact.deleteContact();
        }
        else if(choice==5){
            cout<<"Thank You!\n";
        }
        else{
            cout<<"Invalid Choice.\n";
        }

    }while(choice!=5);

    return 0;
}