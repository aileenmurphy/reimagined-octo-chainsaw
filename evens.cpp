#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int num;
    cout << "Enter a digit" << endl;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        if (i%2 == 0)
        {
            cout<< i << endl;
        }
    }
}