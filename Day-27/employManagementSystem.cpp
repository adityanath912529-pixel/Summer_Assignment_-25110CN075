#include<bits/stdc++.h>
using namespace std;

class Employe{
    private:
    string name;
    string id;
    int totalProjectCompleted;
    double salary;
 public:

    Employe(){
    
        salary=50000;
        totalProjectCompleted=0;

    }

    Employe(string name, string id){
     this->name=name;
     this->id=id;
     salary=50000;
     totalProjectCompleted=0;

    }

    void getVerify(){
        string currId;
        cout<<"Enter your id :";
        cin>>currId;
        if(currId==id){
         int choice;
         cout<<"\n 1.Show Details";
         cout<<"\n 2.Update Projects";
         cout<<"\n Enter your choice:";
         cin>>choice;

         if(choice==1){
            showDetail();

         }
         else if(choice==2){
            updateProject();
            showDetail();
         }
         else{
            cout<<"Invalid choice";
         }
            
        }
        else{
            cout<<"Invalid user";
        }


    }

  void updateProject(){
    int newProjects;
    cout<<"Enter number of newly completed project ";
    cin>>newProjects;

    totalProjectCompleted+=newProjects;
    salary+=newProjects*1500;
    cout<<"Projects updated successfully \n";
    cout<<"Current Projects:"<<totalProjectCompleted<<endl;
    
  }

    void showDetail(){
        cout<<"====DETAILS==== \n";
        cout<<"Name :"<<name;
        cout<<"\n  id : "<<id;
        cout<<" \n You have completed "<<totalProjectCompleted<<" project till now";
        cout<<" \n Your current monthly salary is :"<<salary;
    
    }


};

int main(){
    Employe e1( "Aditya","1234");
    
    e1.getVerify();
    
}