// Print name n time //
 
#include<iostream>
using namespace std;

int f(int i,int n)
{
    if(i>n)
    return;
    cout<<"A";
    f(i+1,n)
}

int main ()
{
    int n;
    cin>>n;
    f(1,n);
}