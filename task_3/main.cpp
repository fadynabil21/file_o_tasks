#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream x("welcome.txt");
    x << "Hello Everybody";
    x.close();

    ifstream in("welcome.txt");

    string text;
    getline(in, text);
    in.close();

    text.replace(11, 4, "one");

    ofstream out("welcome.txt");
    out << text;
    out.close();

    cout << text;

    return 0;
}
