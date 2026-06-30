#include<iostream>
#include<string>

using namespace std;
class Students{
private:
string name;
int rollNumber;


 int  marks1[5];
int marks2 [5];
string school_10th;
string school_12th;


public:
Students(){
    name="";
    rollNumber=0;
    school_10th ="";
school_12th="";

for(int i=0;i<5;i++){
    marks1[i]=0;
marks2 [i]=0;

}
 



}

void input(){
    cout<<"Enter your name: ";
    getline(cin,name);

    cout<<"Enter your curent roll number : ";
    cin>>rollNumber;

    
    
    
    
    cin.ignore();
    cout<<"Enter your 10th school Name:";
    getline(cin,school_10th);


    cout<<"Enter your marks of 10th class in 5 subject: ";
    for(int i=0;i<5;i++){
cin>>marks1[i];
    }

   
   
    cin.ignore();
    cout<<"Enter your 12th school Name:";
    getline(cin,school_12th);

     cout<<"Enter your marks of 12th class in 5 subject: ";
     for(int i=0;i<5;i++){ cin>>marks2[i];}
}

void showDetail(){
    int total1=0,total2=0;
    cout<<endl;
    cout<<"Name: " <<name<<endl;
    cout<<"Roll-Number :"<<rollNumber<<endl;

    for(int i=0;i<5;i++){
total1+=marks1[i];
    }

     for(int i=0;i<5;i++){
total2+=marks2[i];
    }

    cout<<"10th percentage :"<<total1*.2 <<"  from "<<school_10th<<endl;
    cout<<"12th percentage :"<<total2*0.2<<"  from "<<school_12th<<endl;
}

};

int main(){
    Students s1;
    int choice;
do{ cout<<"====Student====";
    cout<<"\n 1. Add student detail. \n 2. Show Detail . \n 3. Exit";
    cout<<" \n Enter your choice : ";
    cin>>choice;

    if(choice==1){
        s1.input();
    }
    else if(choice==2){
        s1.showDetail();
    }
    else if(choice==3){
        cout<<"Thank you";
        break;
    }
    else {cout<<"Inavalid choice";}
}
while(choice!=3);


}