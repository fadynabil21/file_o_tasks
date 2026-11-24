
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> names;

    names.push_back("fady nabil ");
    names.push_back("Youssef Ebrahim ");
    names.push_back("nada Mahmoud");
    names.push_back("Esraa Ebrahim");

    sort(names.begin(), names.end());

    cout << "Names in Ascending Order:" << endl;

    for (int i = 0; i < names.size(); i++)
    {
        cout << names[i] << endl;
    }

    return 0;
}
