#include<bits/stdc++.h>
using namespace std;

class Inventory{
    int id,quantity;
    string name;

public:
    void addProduct(){
        cout<<"Enter Product ID: ";
        cin>>id;
        cin.ignore();
        cout<<"Enter Product Name: ";
        getline(cin,name);
        cout<<"Enter Quantity: ";
        cin>>quantity;
    }

    void display(){
        cout<<"\nProduct ID: "<<id<<endl;
        cout<<"Product Name: "<<name<<endl;
        cout<<"Quantity: "<<quantity<<endl;
    }
    void updateQuantity(){
        cout<<"Enter New Quantity: ";
        cin>>quantity;
        cout<<"Quantity Updated Successfully"<<endl;
   
   
    }

};

int main(){
    Inventory p;
    int choice;
    do{
        cout<<"\n1.Add Product\n2.Display Product\n3.Update Quantity\n4.Exit\n";
        cout<<"Enter Choice: ";
        cin>>choice;
        switch(choice){
            
            case 1: p.addProduct(); break;
            case 2: p.display(); break;
            case 3: p.updateQuantity(); break;
            case 4: cout<<"Thank You"<<endl; break;
            default: cout<<"Invalid Choice"<<endl;}
    }while(choice!=4);
    return 0;
}