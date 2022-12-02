#include<iostream>
using namespace std;

void fun(int no)          // Call by value
{
    cout<<"Inside call by Value no : "<<no<<"\n";
    no++;
}
void gun(int *p)          // Call by address
{
    cout<<"Inside call by address : "<<*p<<"\n";
    (*p)++;
}

void sun(int &ref)          // Call by reference
{
    cout<<"Inside call by reference : "<<ref<<"\n";
    ref++;
}

int main()
{
    int i = 10;
    int j = 10;
    int k = 10;

    fun(i);
    cout<<i<<"\n";
    gun(&j);
    cout<<j<<"\n";
    sun(k);
    cout<<k<<"\n";
    return 0;
}