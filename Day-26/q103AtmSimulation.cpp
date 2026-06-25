#include<iostream>
#include<string>
using namespace std;

class ATM{
private:
double balance;
int pin;

public:
ATM(double balance,int pin ){
    this->balance=balance;
    this->pin=pin;
}

void getPin(int enteredPin){

    if(pin==enteredPin){
        menu();
    }
    else{
        cout<<"Invalid Pin";
    }


}

void checkBalance(){
    cout<<"Your current balance is"<<balance;
    cout<<endl;
}

void depositMoney(double amount){
    cout<<"You have deposited : "<<amount <<endl;
    balance+=amount;
    cout<<"Your current balance is :"<<balance;
    cout<<endl;
}

void withdrawMoney(double amount){
    if(amount<=balance){
        cout<<"Your withdraw money :"<<amount<<endl;
        balance-=amount;
        cout<<"Your current balance is :"<<balance;
        cout<<endl;
    }
    else{
        cout<<"You have insufficient fund.";
    }
}

void exit(){
    
}


void menu(){
    int choice;
    double amount;


    do{
        cout<<"\n===ATM MENU===\n";
        cout<<"1. Check Balance \n";
        cout<<"2. Deposit Money \n";
        cout<<"3.withdraw Money \n";
        cout<<"4. Exit \n";
        cout<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
        cout<<endl;

        switch(choice){
            case 1:
            checkBalance();
            break;

            case 2:
            cout<<"Enter amount to deposit: ";
            cin>>amount;
            depositMoney(amount);
            break;

            case 3:
            cout<<"Enter amount to withdraw :";
            cin>>amount;
            withdrawMoney(amount);
            break;

            case 4:
            exit();
            cout<<"Thank you for using the ATM \n";
            break;

            default:
            cout<<"Invalid Choice \n";
        }
    }
    while(choice!=4);
}

};

int main(){
    ATM user(100000,1789);


    int pin;
    cout<<"Enter your pin :";
    cin>>pin;
    user.getPin(pin);


    return 0;
}