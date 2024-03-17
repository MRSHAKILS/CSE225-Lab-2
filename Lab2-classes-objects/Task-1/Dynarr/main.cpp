#include <iostream>
#include"dynarr.h"

using namespace std;

int main()
{
    dynArr arr1; //object without an argument

    dynArr arr2(5); // obejct with an argumetnt 5

    for(int i=0; i < 5; i++)
    {
        int value;
        cout<< "Enter value: ";
        cin >> value;
        arr2.setValue(i, value);
    }
    cout<< endl<< "Printing values: " <<endl;
    for(int i = 0; i < 5; i++)
    {
        cout << arr2.getValue(i) << " ";
    }
    cout << endl;


    return 0;
}
