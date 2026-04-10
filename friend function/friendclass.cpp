#include <iostream>
using namespace std;

class BA
{
    int accbal;
    public:
    
    BA(int bal)
    {
        accbal=bal;
    }
    friend class Auditor;
};

class Auditor
{
    public:
    void checkBalance(BA acc)
    {
        cout<<"Account balance is: "<<acc.accbal;
        cout<<endl;
    }
};

int main()
{
    BA B(7000);
    Auditor A;
    A.checkBalance(B);
}
