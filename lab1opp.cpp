#include "Banknote.h"
#include "Windows.h"
#include <iostream>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    try 
    {
        Banknote b3;
        b3.Read();
        b3.Display();

    }
    catch (const exception& e) 
    {
        cerr << "Помилка: " << e.what() << endl;
    }

    return 0;
}
