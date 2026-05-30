# include<iostream>
using namespace std;
 
int main(){ 
    int beg,end,count;
    cout<<"Enter starting number:";
    cin>>beg;
    cout<<endl;
    cout<<"Enter ending number";
    cin>>end;
    cout<<endl;
     for(int i=beg;i<=end;i++){
        count=0;

        if(i==1){continue;}
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                count++;
                break;
            }
        }

        if(count==0){
            cout<<i<<" ";
        }
     } 
     return 0;
}