#include <iostream>
#include "Test.h"

using namespace std;

int main()
{
    cout << "Hello world! " << endl;
    cout << "Test my!" << endl;

    Test* t = new Test();
    t->SetCounter(1000);

    cout << t->GetCounter() <<endl;

    cout << strcasecmp("aaa", "aaab") << endl;

    return 0;

}
