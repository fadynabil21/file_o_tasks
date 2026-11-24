#include <iostream>
#include <fstream>
using namespace std;

int main()
{
     ofstream x("task-1.txt");
   string name;
   int id;
   int Grade;

   cout<<"Enter Full Name:";
   getline(cin ,name);

    cout<<"Enter ID:";
   cin>>id;

   cout<<"Enter Grade:";
   cin>>Grade;


   x<<"Full Name: "<<name <<"\n";
    x<<"ID: "<<id <<"\n";
    x<<"Grade: "<<Grade;
    x.close();


    return 0;
}
