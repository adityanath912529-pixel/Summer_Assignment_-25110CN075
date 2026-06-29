#include<iostream>
using namespace std;

class Calculator{
public:
    double num1,num2;
    void input(){
        cout<<"Enter two numbers: ";
        cin>>num1>>num2;
        }

    void add(){
        cout<<"Result = "<<num1+num2<<endl;
    }
    void subtract(){
        cout<<"Result = "<<num1-num2<<endl;
    }


         void multiply(){
           cout<<"Result = "<<num1*num2<<endl;
    }
    void divide(){
        if(num2==0)
            cout<<"Division by zero is not possible!"<<endl;
        else
     
        cout<<"Result = "<<num1/num2<<endl;
   
   
   
    }
};


int main(){
    Calculator c;
    int choice;
    do{
        cout<<"\n===== Calculator Menu =====\n";
        cout<<"1. Addition\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        if(choice>=1&&choice<=4)
            c.input();
        switch(choice){
            case 1: c.add(); break;
            case 2: c.subtract(); break;
            case 3: c.multiply(); break;
            case 4: c.divide(); break;
            case 5: cout<<"Exiting Calculator..."<<endl; break;
            default: cout<<"Invalid Choice!"<<endl;
        }
    }while(choice!=5);
    return 0;
}