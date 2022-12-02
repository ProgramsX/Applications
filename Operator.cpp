#include<iostream>
using namespace std;

class Demo
{
    public:
        int A,B;

        Demo()
        {
            A = 0;
            B = 0;
        }
        Demo(int i = 11)
        {
            A = i;
            B = 0;
        }
        Demo(int i = 11, int j = 21)
        {
            A = i;
            B = j;
        }
};

int main()
{
    Demo obj1;
    Demo obj2(11);
    Demo obj3(11,21);

    return 0;
}