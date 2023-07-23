#include <iostream>
#include <cstring>
using namespace std;

class complex
{
    int real, imag;

public:
    void set(int re, int im)
    {
        real = re;
        imag = im;
    }

    void get()
    {
        if(imag<0)
        {
            cout<<"Complex NO. is "<<real<<imag<<"i \n";
        }
        else
        {
            cout<<"Complex NO. is "<<real<<"+"<<imag<<"i \n";
        }
    }

    complex operator+(complex op);
    complex operator-(complex op);
    complex operator++();
    complex operator==(complex op);
};

complex complex::operator+(complex ob)
{
    complex temp;
    temp.real = ob.real + real;
    temp.imag = ob.imag + imag;
    return temp;
}

complex complex::operator-(complex ob)
{
    complex temp;
    temp.real = ob.real - real;
    temp.imag = ob.imag - imag;
    return temp;
}

complex complex::operator++()
{
    ++imag;
    ++real;
    return *this;
}

complex complex::operator==(complex op)
{
    if (op.imag == imag && op.real == real)
    {
        cout << "Equal" << endl;
    }
    else

        cout << "Not equal " << endl;
}
int main()
{
    int n;

    cout << "Before operator overloading" << endl;

    complex ob, ob2;
    ob.set(10, 20);
    ob2.set(10, 30);
    ob.get();
    ob2.get();

    while(true)
    {
        cout << "1) +" << endl;
        cout << "2) -" << endl;
        cout << "3) ++" << endl;
        cout << "4) ==" << endl;
        cout << "5)Exit" << endl;

        cout << "Which overloading you want to perform ?" << endl;
        cin>>n;

        cout << "After overloading" << endl;

        switch (n)
        {
        case 1:
        {
            ob = ob + ob2;
            ob.get();
        }
        break;

        case 2:
        {
            ob = ob - ob2;
            ob.get();
        }
        break;

        case 3:
        {
            ++ob;
            ob.get();
        }
        break;
        
 
         case 4:
        {
            ob == ob2;
        }
        break;
        
        case 5:
        {
            exit(0);
        }
        break;
        
        default:
            break;
        }
        cout << endl;
    }

    return 0;
}
