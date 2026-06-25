#include<iostream>
#include<string>
using namespace std;

class Voter {
    private:
    string name;
    int age;

    public:
    void getData(){
        cout<<"Enter your name : ";
        getline(cin,name);

        cout<<"Enter your age: ";
        cin>>age;
    }

    void checkEligibility(){
        if(age>=18){
            cout<<name<<" is eligible for voting";
        }
        else{
            cout<<name<<" is  not eligible for voting";
        }
    }

};
int main(){
    Voter v1;
    v1.getData();
    v1.checkEligibility();

    return 0;
}