#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n{ 50 };
    
    
    /*int amount{};
    int i{ 1 };
    while (i <= n)
    {
        amount += i;
        i++;
    }*/

    /*int amount{};
    for (int i{1}; i <= n; i++)
        amount += i;

    cout << amount << "\n";

    amount = 0;
    for(int i = n; i > 0; i--)
        amount += i;

    cout << amount << "\n";*/

    //for (int i{}; i <= n; i++)
    //{
    //    /*if (i == 28)
    //        break;*/
    //        //goto label1;
    //        
    //    if (i % 2)
    //        continue;
    //    cout << i << " ";
    //}
    //cout << "\n";

    /*for (int i{}; i <= n; i++)
        if(i % 2 == 0)
            cout << i << " ";
    cout << "\n";*/

    //for (int i{}; i <= n; i+=2)
    //    cout << i << " ";

    //int rows{ 5 }, cols{ 8 };

    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //        cout << i << " " << j << "\n";
    //        //cout << setw(2) << "*";
    //    //cout << "\n";
    //}

    int size{ 11 };
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            if(i == j 
                || i == size - 1 - j 
                || i == size / 2 
                || j == size / 2) // i + j == size - 1
                cout << setw(2) << "*";
            else
                cout << setw(2) << " ";
        cout << "\n";
    }

    for (size_t i = 0; i < size; i++)
    {

    }
    
}
