# include<iostream>
using namespace std;
 
int main(){ 
    int num,count=0;
    cout<<"Enter the number:";
    cin>>num; cout<<endl;

    if(num==1){
        cout<<"Not a prime number";
    } 

    else{
        for(int i=2;i<=num/2;i++){
            if(num % i==0){ 
                count++;
                break;
            } 
           
        }
         if(count>0){
        cout<<"Not a prime number";
    }
    else{
        cout<<"It is a prime number";
    }
    } 

   
return 0;
}