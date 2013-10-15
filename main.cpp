#include <iostream>
#include <string.h>
#include "BasicTest.h"

using namespace std;

int main()
{
    cout << "Hello world! " << endl;
    cout << "Test my!" << endl;

    cout << strcmp("aaa", "aaab") << endl;

    BasicTest* bTest = new BasicTest();

    return 0;

}
