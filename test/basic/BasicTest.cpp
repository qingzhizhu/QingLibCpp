#include "BasicTest.h"
#include <iostream> //cout, ci endl, string
#include <stdio.h>  //getchat 不报错了
#include <stdlib.h> //malloc,realloc,free 不报错了
#include <string.h> //memset, strlen

using namespace std;

BasicTest::BasicTest()
{
    //ctor
    testIO();
    testMem();
}

BasicTest::~BasicTest()
{
    //dtor
}


void BasicTest::testIO()
{
    cout << "--------------BasicTest::testIO() 基础io----------------" << endl;

    cout << "NULL | " << NULL << endl;

    int *p;
    *p = 120;
    cout << "Pointer int | " << p << endl;
    cout << "Pointer int address | " << &p << endl;
    cout << "Pointer int value | " << *p << endl;

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

    cout << "下面的cin>>num 注释了。" << endl;
    /*
    int sum = 0, num = 0;
    while(cin>>num){
        sum += num;
    }
    cout << "sums is " << sum << endl;
    */

}

void BasicTest::testMem()
{
    cout << "--------------BasicTest::testMem() 内存基本操作----------------" << endl;
    char *cp;
    cout << "分配长度为%d的内存块" << 100 << endl;
	cp=(char *)malloc(100);
	if(cp)
		cout << "malloc Memory Allocated at: %x" << cp << endl;
    else
        cout << ("Not Enough Memory!\n") << endl;

    int *p;
	p=(int*)calloc(150,sizeof(char));
	if(p)
		cout << "calloc Memory Allocated at: %x" << p << endl;
    else
        cout << ("Not Enough Memory!\n") << endl;
    //getchar();
	p=(int*)realloc(p,100);
    if(p)
		cout << "realloc Memory Reallocated at: %x" << p << endl;
    else
        cout << ("Not Enough Memory!\n") << endl;
	free(p);
    //getchar();
    cout << "realloc(NULL pointer, num) num > 0 相当于malloc()函数；" << endl;
    cout << "realloc(pointer ,0) pointer != NULL, 相当于free()函数。" << endl;

    cout << "memset 函数解释：将s中前n个字节 （typedef unsigned int size_t）用 ch 替换并返回 s 。" << endl
         << "memset：作用是在一段内存块中填充某个给定的值，它是对较大的结构体或数组进行清零操作的一种最快方法。"
         << endl;
    cout << "快速给数组元素赋值为NULL， memset(m_pItems, 0, sizeof(m_pItems)); 代替重复的m_pItems[i] = NULL 操作" << endl;
    char buffer[] = "Hello world\n";
    cout << "Buffer before memset: " << buffer << endl;
    memset(buffer,'*',strlen(buffer));
    cout <<"Buffer after memset: " << buffer << endl;

}


