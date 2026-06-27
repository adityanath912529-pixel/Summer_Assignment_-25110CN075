#include<bits/stdc++.h>
using namespace std;

class Marksheet{

    private:
    double subject1;
    double subject2;
    double subject3;
    double subject4;
    string subject;
    double subject5;


    public:
    void getNumber(){
        cout<<"\nEnter your subject marks out of 100 ";
        cout<<"\nEnter your subject mark :";
        double Maths,Hindi,Physics,Chemistry,English;
        cout<<"\n Enter the mark of Maths:";
        cin>>subject1;

        cout<<"Enter the mark of Physics:";
        cin>>subject2;

        cout<<"Enter the mark of Chemistry:";
        cin>>subject3;

        cout<<"Enter the mark of English:";
        cin>>subject4;
        

        cout<<" \nEnter the 5th subject:";
        cin>>subject;
        cout<<"Enter the mark of subject5:";
        cin>>subject5;

        getResult();
    }

    void getResult(){

        cout<<"===Result===\n";
        cout<<"Subject "<<"marks obtained\n";
        cout<<"Maths "<<subject1<<endl;
        cout<<"Physics"<<subject2<<endl;
        cout<<"Chemistry"<<subject3<<endl;
        cout<<"English "<<subject4<<endl;
        cout<<subject<<" "<<subject5<<endl;
        double percentage=(subject5+subject1+subject2+subject3+subject4)/5;
        if(percentage>33){
            cout<<"Congrulations! you have passed the examination with "<<percentage<<"%";
        }
        else{
            cout<<"You have not passed the examination";
        }
    }

};

int main(){
    Marksheet s1;
    s1.getNumber();
}