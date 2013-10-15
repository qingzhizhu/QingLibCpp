#include "BasicTest.h"
#include <iostream>

using namespace std;

BasicTest::BasicTest()
{
    //ctor
    testIO();
}

BasicTest::~BasicTest()
{
    //dtor
}


void BasicTest::testIO()
{
    char str[32] = "this is a char";
    cout << "char | " << str << endl;
    string str2 = "this is a string";
    cout << "string | " << str2 << endl;

    bool b = false;
    cout << "bool | " << b << endl;

    int i = 10;
    cout << "int | " << i << endl;

    float f = 3.1415926;
    cout << "float | " << f << endl;

    cout << "enum | " << MONDAY << ", " << T << endl;

    int arr[5] = {10, 3, 2, 34, 5};
    cout << "Array int" << arr << endl;

    cout << "Enter numbers, windows ctrl + z or unix control+d is end.:" << endl;
    /*int v1, v2;
    cin >> v1 >> v2;
    cout << "The sum of " << v1 << " and " << v2
         << " is " << v1 + v2 << endl;*/
    int sum = 0, num = 0;
    while(cin>>num){
        sum += num;
    }
    cout << "sums is " << sum << endl;


}
