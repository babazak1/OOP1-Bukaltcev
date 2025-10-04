#pragma once
#include <iostream>
using namespace std;

struct Banknote
{
private:
    int first;  
    int second;  

public:
    Banknote Init(int f, int s);   
    void Read();                   
    void Display();            
    int Summa();                 
};
