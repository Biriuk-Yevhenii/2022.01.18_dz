using namespace std;

#include <iostream>

void func()
{
    cout << "Enter num: ";
    int a;
    cin >> a;
    cout << endl << a << endl;
}

void func1()
{
    cout << "Error\n";
    cout << ":D\n";
}
int main()
{
    cout << "Hi\n";
    func();
    func1();
}
