#include <iostream>
using namespace std;

class Calculator
{
private:
    int num1;
    int num2;
    int res;

public:
    void add(int num1, int num2)
    {
        res = num1 + num2;
    }
};

int menuChoice()
{
    int choice;
    cout << "0.Exit" << endl;
    cout << "1. Add" << endl;
    cin >> choice;
    return choice;
}

int main()
{
}