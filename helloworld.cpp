#include <iostream>
#include <vector>
#include <string>
#include "test.h"

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " " << test() << " ";
    }
    cout << endl;
}