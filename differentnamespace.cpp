/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
namespace ns1
{
    int i;
}
namespace ns2
{
    int i;
}
namespace ns3
{
    struct inventory{
        string nm;
        int onhand;
        float sal;
    };
    inventory j;
}
int main()
{
    using namespace ns3;
    ns1::i=10;
    ns2::i=100;
    cout<<ns1::i<<endl;
    cout<<ns2::i<<endl;
    cout<<"Hello World"<<endl;
    cin>>j.nm>>j.onhand>>j.sal;
    cout<<j.nm<<" "<<j.onhand<<" "<<j.sal<<endl;

    return 0;
}
