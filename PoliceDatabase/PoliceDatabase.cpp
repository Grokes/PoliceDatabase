#include <iostream>
#include <Windows.h>
#include "Database.h"

//using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Database test;
    test.insert("123", "���� �������");
    test.insert("143", "���� �������");
    test.insert("153", "���� �������");
    test.insert("153", "���� �������");
    test.insert("153", "���� �������");
    test.insert("153", "���� �������");
    test.insert("153", "���� �������");
    test.insert("123", "���� �������");
    test.insert("127", "���� �������");
    test.insert("124", "���� �������");
    test.insert("345", "���� �������");
    test.insert("122", "���� �������");
    test.insert("653", "���� �������");

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