#include<bits/stdc++.h>
using namespace std;

class ArraySystem{
    int arr[100],n;
public:
    void create(){
        cout<<"Enter size: ";
        cin>>n;
        cout<<"Enter elements: ";
        for(int i=0;i<n;i++)
            cin>>arr[i];
    }
    void display(){
        cout<<"Array: ";
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    void search(){
        int key,flag=0;
        cout<<"Enter element to search: ";
        cin>>key;
        for(int i=0;i<n;i++){
            if(arr[i]==key){
                cout<<"Element found at index "<<i<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"Element not found"<<endl;
    }
    void update(){
        int index,value;
        cout<<"Enter index: ";
        cin>>index;
        if(index>=0&&index<n){
            cout<<"Enter new value: ";
            cin>>value;
            arr[index]=value;
            cout<<"Updated Successfully"<<endl;
        }
        else
            cout<<"Invalid Index"<<endl;
    }
};

int main(){
    ArraySystem a;
    int choice;
    do{
        cout<<"\n1.Create Array\n2.Display Array\n3.Search Element\n4.Update Element\n5.Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;
        switch(choice){
            case 1: a.create(); break;
            case 2: a.display(); break;
            case 3: a.search(); break;
            case 4: a.update(); break;
            case 5: cout<<"Thank You"<<endl; break;
            default: cout<<"Invalid Choice"<<endl;
        }
    }
    while(choice!=5);
    return 0;
}