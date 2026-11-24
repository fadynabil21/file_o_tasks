#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string a, b, o;

    ifstream in("fruit.txt");

    in >> a;
    in >> b;
    in >> o;

    cout << a << "\n";
    cout << b << "\n";
    cout << o << "\n";

    in.close();

    ofstream out("fruit.txt", ios::app);

    out << "Fresh Fruits";

    out.close();

    return 0;
}
