#include<iostream>
using namespace std;

class Maths
{
    public:
         int iNo1;
         int iNo2;

    Maths()
    {
         cout<<"Inside Default funtion\n";

         iNo1 = 0;
         iNo2 = 0;
    }

    Maths(int A, int B)
    {
        
        cout<<"Inside Parameterised funtion\n";
        
        iNo1 = A;
        iNo2 = B;
    }     
    
    int Addition()
    {
        return iNo1 + iNo2;
    }

    int Substraction()
    {
        return iNo1 - iNo2;
    }
};

int main()
{
    cout<<"Inside Parameterised funtion\n";
    
    Maths mobj1;
    Maths mobj2(11,10);
    int ret = 0;

    ret = mobj2.Addition();
    cout<<"Addition is : "<<ret<<"\n";

    ret = mobj1.Addition();
    cout<<"Substraction is : "<<ret<<"\n";

    return 0;
}