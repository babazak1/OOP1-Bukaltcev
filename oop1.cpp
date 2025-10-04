#include "Banknote.h"
#include <stdexcept>


Banknote Banknote::Init(int f, int s)
{
    int valid[] = { 1, 2, 5, 10, 20, 50, 100, 500, 1000 };
    bool ok = false;
    for (int v : valid)
{
        if (v == f) { ok = true; break;
}
    }
    if (!ok) 
    {
        throw invalid_argument("Невірний номінал купюри!");
    }
    if (s <= 0) 
    {
        throw invalid_argument("Кількість має бути додатньою!");
    }

    first = f;
    second = s;

    return *this;
}


void Banknote::Read()
{
    cout << "Введіть номінал купюри: ";
    cin >> first;
    cout << "Введіть кількість купюр: ";
    cin >> second;
}


void Banknote::Display() 
{
    cout << "Номінал: " << first << ", Кількість: " << second << ", Сума: " << Summa() << endl;
}


int Banknote::Summa() 
{
    return first * second;
}
