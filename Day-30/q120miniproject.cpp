#include<bits/stdc++.h>
using namespace std;

class Student{
    int id;
    string name;
    int marks[5];
public:
    Student(){
        id=0;
        name="";
        for(int i=0;i<5;i++)
            marks[i]=0;
    }

    void addStudent(){
        cout<<"Enter Student ID: ";
        cin>>id;
        cin.ignore();
        cout<<"Enter Student Name: ";
        getline(cin,name);
        cout<<"Enter Marks of 5 Subjects of class 10th: ";
        for(int i=0;i<5;i++)
            cin>>marks[i]; }

    void displayStudent(){
        cout<<"\nStudent ID: "<<id<<endl;
        cout<<"Student Name: "<<name<<endl;
        cout<<"Marks: ";
        for(int i=0;i<5;i++)
            cout<<marks[i]<<" ";
       
            cout<<endl;
    }

    void totalPercentage(){
        int total=0;
        for(int i=0;i<5;i++)
            total+=marks[i];
        cout<<"Total Marks: "<<total<<endl;
        cout<<"Percentage: "<<total/5.0<<"%"<<endl;
    }



    void nameLength(){
        cout<<"Length of Name: "<<name.length()<<endl;}

    void upperCase(){
        string temp=name;
        for(int i=0;i<temp.size();i++)
            temp[i]=toupper(temp[i]);
        cout<<"Uppercase Name: "<<temp<<endl;
    }
};

int main(){
    Student s;
    int choice;
    
       do{  cout<<"\n===== Student Record Management =====\n";
        cout<<"1.Add Student\n";
        cout<<"2.Display Student\n";
        cout<<"3.Total & Percentage\n";
        cout<<"4.Name Length\n";
        cout<<"5.Uppercase Name\n";
        cout<<"6.Exit\n";
        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice){
            case 1: s.addStudent(); break;
            case 2: s.displayStudent(); break;
            case 3: s.totalPercentage(); break;
            case 4: s.nameLength(); break;
            case 5: s.upperCase(); break;
            case 6: cout<<"Thank You"<<endl; break;
            default: cout<<"Invalid Choice"<<endl;
        } }while(choice!=6);

    return 0;} 