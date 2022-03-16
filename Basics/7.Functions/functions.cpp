#include <iostream>
#include <string>
using namespace std;

// no prototype needed but order of writing matters
// need to be written before voidFunction or compiler will give error
int secondFunction(int num)
{
    return num;
}
void voidFunction()
{
    cout << "This function returns nothing" << endl;
    cout << "Calling second Function " << secondFunction(2) << endl;
    return; // optional
}

// default arguments
void greeting(string name = "World")
{
    cout << "Hello " << name << endl;
}

int main()
{
    voidFunction();
    greeting();
    greeting("Elon Musk");
    return 0;
}