#include<iostream>
using namespace std;
int main(){
    int start,end,rem,countDigit,sum;
    cout<<"Enter the starting number:";
    cin>>start;
    cout<<endl;
    cout<<"Enter the endig number:";
    cin>>end;
    cout<<endl;

    int i=start; 
    
    while(i<=end){
        countDigit=0;
        sum=0; 
       int original=i;
       int temp=i;

        while(temp>0){ 
             temp/=10;
    countDigit++; 
} 

if(i==0){
    countDigit++;
}
 temp=i;

while(temp>0){
    rem=temp%10;
     
    int power=1;
    for(int j=1;j<=countDigit;j++){
        power*=rem;
    } 
    sum+=power; 
    temp/=10;


}
if(original==sum){
    cout<<i<<" ";
}

i++;
temp=i;

     

} 

return 0;

}