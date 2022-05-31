#include<iostream>
using namespace std;
class complex
{
    int r,i;
    public: 
          void accept();
          void display()const;
          complex add(const complex&) const;
};
void complex :: accept()
{
    cout<<"Enter the values of r and i"<<endl;
    cin>>r>>i;
}
void complex :: display()const
{
    
    cout<<r<<" + "<<i<<endl;
}
complex complex :: add(const complex& p)const
{
    complex t;
    t.r=r+p.r;
    t.i=i+p.i;
    return t;
}
int main()
{
    complex c1,c2,res;
    c1.accept();
    c2.accept();
    res=c1.add(c2);
    res.display();
    return 0;
}
