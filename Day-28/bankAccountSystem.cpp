#include<bits/stdc++.h>
using namespace std;

class BankAccount{
private:
    int accountNumber;
    string name;
    double balance;

public:
    BankAccount(){
        accountNumber = 0;
        name = "";
        balance = 0;
    }

    void createAccount(){
        cout<<"Enter Account Number: ";
        cin>>accountNumber;
        cin.ignore();

        cout<<"Enter Account Holder Name: ";
        getline(cin,name);

        cout<<"Enter Initial Balance: ";
        cin>>balance;

        cout<<"\nAccount Created Successfully.\n";
    }

    void displayAccount(){
        cout<<"\nAccount Number : "<<accountNumber<<endl;
        cout<<"Account Holder : "<<name<<endl;
        cout<<"Balance : "<<balance<<endl;
    }

    void depositMoney(){
        double amount;
        cout<<"Enter Amount to Deposit: ";
        cin>>amount;

        balance += amount;

        cout<<"Money Deposited Successfully.\n";
    }

    void withdrawMoney(){
        double amount;
        cout<<"Enter Amount to Withdraw: ";
        cin>>amount;

        if(amount > balance){
            cout<<"Insufficient Balance.\n";
        }
        else{
            balance -= amount;
            cout<<"Money Withdrawn Successfully.\n";
        }
    }
};

int main(){

    BankAccount account;
    int choice;

    do{
        cout<<"\n===== Bank Account Management System =====\n";
        cout<<"1. Create Account\n";
        cout<<"2. Display Account\n";
        cout<<"3. Deposit Money\n";
        cout<<"4. Withdraw Money\n";
        cout<<"5. Exit\n";
        cout<<"Enter Your Choice: ";
        cin>>choice;

        if(choice==1){
            account.createAccount();
        }
        else if(choice==2){
            account.displayAccount();
        }
        else if(choice==3){
            account.depositMoney();
        }
        else if(choice==4){
            account.withdrawMoney();
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