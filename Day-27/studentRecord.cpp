#include<iostream>
#include<string>

using namespace std;
class Students{
private:
string name;
int rollNumber;

public:
double  marks1;
double marks2;
string school_10th;
string school_12th;


public:
Students(){

}

void input(){
    cout<<"Enter your name: ";
    getline(cin,name);

    cout<<"Enter your curent roll number : ";
    cin>>rollNumber;

    cout<<"Enter your marks of 10th class in 5 subject: ";
    cin>>marks1;
    cin.ignore();
    cout<<"Enter your 10th school Name:";
    getline(cin,school_10th);


    cout<<"Enter your marks of 12th class in 5 subject: ";
    cin>>marks2;
    cin.ignore();
    cout<<"Enter your 12th school Name:";
    getline(cin,school_12th);
}

void showDetail(){
    cout<<endl;
    cout<<"Name: " <<name<<endl;
    cout<<"Roll-Number :"<<rollNumber<<endl;
    cout<<"10th percentage :"<<marks1*0.2 <<"  from "<<school_10th<<endl;
    cout<<"12th percentage :"<<marks2*0.2<<"  from "<<school_12th<<endl;
}

};

int main(){
    Students s1;
    s1.input();
    s1.showDetail();

}