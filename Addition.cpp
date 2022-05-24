/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
int* acquire()
{
    int* p;
      p=new int;
     return p; 
}
void accept(int& p,int& q )
{
    cout<<"Enter the values of a & b\n";
    cin>>p>>q;
}
void add(const int& p,const int& q,int& r)
{
    r=p+q;
}
void display(const int& p,const int& q,const int& r)
{
    cout<<p<<" + "<<q<<" = "<<r<<endl;
}
int main()
{
    int *a,*b,*c;
    a=acquire();
    b=acquire();
    c=acquire();
    accept(*a,*b);
    add(*a,*b,*c);
    display(*a,*b,*c);
    //display1(*a,*b,*c);
    delete(a);
    delete(b);
    delete(c);
    return 0;
}
