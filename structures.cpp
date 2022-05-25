#include<iostream>
#include<stdlib.h>
using namespace std;
struct inventory
{
    string nm;
    float price;
    int onhand;
};
typedef unsigned int  UI;
inventory* memory(UI& n)
{
    inventory* p;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    p=new inventory[n];
    if(p==0)
    {
        exit(0);
    }
    else
      return p;
}
void accept(const UI& n,inventory* arr)
{
    cout<<"Enter the details"<<endl;
    for(int i=0;i<n;i++)
      cin>>arr[i].nm>>arr[i].price>>arr[i].onhand;
      
}
void display(const UI& n,const inventory* arr)
{
    cout<<" The details are"<<endl;
    for(int i=0;i<n;i++)
      cout<<arr[i].nm <<" "<< arr[i].price <<" " <<arr[i].onhand <<endl;
    
}
int main()
{
    inventory* arr=0;
    UI n;
    arr=memory(n);
    accept(n,arr);
    display(n,arr);
 return 0;    
}
