#include<bits/stdc++.h>
using namespace std;

class Ticket{
private:
    int ticketId;
    string passengerName;
    string destination;
    bool booked;

public:
    Ticket(){
        ticketId = 0;
        passengerName = "";
        destination = "";
        booked = false;
    }

    void bookTicket(){
        cout<<"Enter Ticket ID: ";
        cin>>ticketId;
        cin.ignore();

        cout<<"Enter Passenger Name: ";
        getline(cin, passengerName);

        cout<<"Enter Destination: ";
        getline(cin, destination);

        booked = true;

        cout<<"\nTicket Booked Successfully.\n";
    }

    void displayTicket(){
        cout<<"\nTicket ID : "<<ticketId<<endl;
        cout<<"Passenger Name : "<<passengerName<<endl;
        cout<<"Destination : "<<destination<<endl;
        cout<<"Status : "<<(booked ? "Booked" : "Not Booked")<<endl;
    }

    void cancelTicket(){
        if(!booked){
            cout<<"No Ticket is Booked.\n";
        }
        else{
            booked = false;
            cout<<"Ticket Cancelled Successfully.\n";
        }
    }

    void checkStatus(){
        if(booked){
            cout<<"Ticket is Booked.\n";
        }
        else{
            cout<<"Ticket is Not Booked.\n";
        }
    }
};

int main(){

    Ticket ticket;
    int choice;

    do{
        cout<<"\n===== Ticket Booking System =====\n";
        cout<<"1. Book Ticket\n";
        cout<<"2. Display Ticket\n";
        cout<<"3. Cancel Ticket\n";
        cout<<"4. Check Status\n";
        cout<<"5. Exit\n";
        cout<<"Enter Your Choice: ";
        cin>>choice;

        if(choice==1){
            ticket.bookTicket();
        }
        else if(choice==2){
            ticket.displayTicket();
        }
        else if(choice==3){
            ticket.cancelTicket();
        }
        else if(choice==4){
            ticket.checkStatus();
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