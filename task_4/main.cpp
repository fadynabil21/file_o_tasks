#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n;
    string name;
    int age;

    cout << "Enter number of persons: ";
    cin >> n;

    ofstream file("persons.txt");

    for (int i = 0; i < n; i++)
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;

        file << name << " " << age << endl;
    }

    file.close();

    return 0;
}
