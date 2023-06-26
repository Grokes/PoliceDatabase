#include <iostream>
#include <Windows.h>
#include "Database.h"

//using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Database test;
    test.insert("123", "Чета нарушил");
    test.insert("143", "Чета нарушил");
    test.insert("153", "Чета нарушил");
    test.insert("153", "Чета нарушил");
    test.insert("153", "Чета нарушил");
    test.insert("153", "Чета нарушил");
    test.insert("153", "Чета нарушил");
    test.insert("123", "Чета нарушил");
    test.insert("127", "Чета нарушил");
    test.insert("124", "Чета нарушил");
    test.insert("345", "Чета нарушил");
    test.insert("122", "Чета нарушил");
    test.insert("653", "Чета нарушил");

    test.print("653");
    cout << endl;
    test.print();
    cout << endl;
    string t1{"100"};
    string t2{"300"};
    test.print(t1, t2);
    cout << endl;
    
    return 0;
}