#include <iostream>
#include <cstring>
using namespace std;

template <class T>void bubble_sort(T*arr,int n)
{   
    T temp;
     for (int j = 0; j < n; j++)
        {
            for (int i = 1; i < n; i++)
            {
                if (arr[i - 1] > arr[i])
                {
                    temp = arr[i - 1];
                    arr[i - 1] = arr[i];
                    arr[i] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << "\t";
        }
};

int main()
{

    int arr[4]={3,5,4,2};
    bubble_sort(arr,4);

    cout<<endl;
    
    float arra[4]={1.1,2.3,0.1,-1.0};
    bubble_sort (arra,4);

    return 0;
}
