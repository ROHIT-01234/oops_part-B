#include <iostream>
#include <cstring>
using namespace std;

class loc
{
    int lat, longi;

public:
    int k = 100;
    loc(int a, int b)
    {
        lat = a;
        longi = b;
    }
    void get()
    {
        cout << endl;
        cout << "Latitude:" << lat << endl;
        cout << "Longitude:" << longi << endl;
        cout<<endl;
    }
    loc operator()(int i, int j);
    loc *operator->() { return this; }
};

loc loc::operator()(int i, int j)
{
    lat = i;
    longi = j;
    return *this;
}

int main()
{
    loc ob1(10, 20);
    int a, b;
    cout << "Enter the Latitude and Longitude respectively:" << endl;
    cin >> a >> b;

    cout << "Before overloading ():" << endl;
    ob1.get();

    cout << "After overloading ():" << endl;
    ob1(a, b);
    ob1.get();

    cout << endl;

    cout << "Before overloading -> value of k:" << ob1.k << endl;
    cout << "After overloading -> value of k:" << ob1->k << endl;

    return 0;
}
