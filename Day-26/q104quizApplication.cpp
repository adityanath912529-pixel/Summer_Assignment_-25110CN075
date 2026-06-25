#include<iostream>
using namespace std;

int main(){
    int answer;
    int score=0;

    cout<<"==== QUIZ APPLICATION ====\n";

    cout<<"\n1.What is the capital of Uttar Pradesh ?\n";
    cout<<"1.Gorakhpur \n 2.Noida \n 3.Lucknow \n 4.Basti \n";
    cout<<"Enter your answer: ";
    cin>>answer;

    if(answer==3){
        cout<<"correct \n";
        score++;
    }
    else{
        cout<<"Wrong \n";
    }

    cout<<"\n 2. What is the capital of INDIA";
     cout<<"\n1.Delhi \n 2.Mumbai \n 3.Chennai \n 4.Kolkata \n";
    cout<<"Enter your answer: ";
    cin>>answer;

    if(answer==1){
        cout<<"correctt \n";
        score++;
    }
    else{
        cout<<"Wrong \n";
    }

 
    cout<<"\n 2. What is the father  of Computer";
     cout<<"\n1.Razon \n 2.Charles Babbage \n 3.Thomas \n 4.Robert \n";
    cout<<"Enter your answer: ";
    cin>>answer;

    if(answer==2){
        cout<<"correct \n";
        score++;
    }
    else{
        cout<<"Wrong \n";
    }

    cout<<"\n ==== RESULT ====\n";
    cout<<"Ypur score :"<<score<<"/3";
    



return 0;
}