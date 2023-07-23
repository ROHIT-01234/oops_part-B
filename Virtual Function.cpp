#include <iostream>
#include <cstring>
using namespace std;

class rs
{
public:
    float rupees;
    virtual void conv() = 0;
};

class dllr : public rs
{
    float dollar;

public:
    void conv()
    {
        cout << "Enter the currency in US dollar:" << endl;
        cin >> dollar;
        rupees = dollar * 82.05;
        cout << "$" << dollar << " = Rs." << rupees << endl;
        cout<<endl;
    }
};

class pound : public rs
{
    float pounds;

public:
    void conv()
    {
        cout << "Enter the currency in Pounds:" << endl;
        cin >> pounds;
        rupees = pounds * 107.29;
        cout << "pounds " << pounds << " = Rs." << rupees << endl;
        cout<<endl;
    }
};

class ers : public rs
{
    float euro;

public:
    void conv()
    {
        cout << "Enter the currency in Euros:" << endl;
        cin >> euro;
        rupees = euro * 92.20;
        cout << "euro " << euro << " = Rs." << rupees << endl;
        cout<<endl;
    }
};

int main()
{

    int ch;
    dllr d;
    pound p;
    ers e;
    while (true)
    {

        cout << "1)Dollar->Rupees" << endl;
        cout << "2)Pounds->Rupees" << endl;
        cout << "3)Euro->Rupees" << endl;
        cout << "Enter the choice:" << endl;
        cin >> ch;
        cout << endl;
        switch (ch)
        {
        case 1:
            d.conv();
            break;
        case 2:
            p.conv();
            break;
        case 3:
            e.conv();
            break;
        default:
            break;
        }
    }

    return 0;
}
