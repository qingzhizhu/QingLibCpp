#include "BasicTest.h"
#include <iostream> //cout, ci endl, string
#include <stdio.h>  //getchat 不报错了
#include <stdlib.h> //malloc,realloc,free 不报错了
#include <string.h> //memset, strlen

//#include <regex.h>
#include <sys/time.h>
#include <sys/types.h>



//#include "StringUtils.h"


using namespace std;

BasicTest::BasicTest()
{
    //ctor
    testIO();
    testMem();

   // testReg();

   testString();

   testPointer();
}

BasicTest::~BasicTest()
{
    //dtor
}



void BasicTest::testString()
{
    cout << "--------------BasicTest::test String----------------" << endl;
    cout << "String 要用 c_str(),不要用data()函数，因为data()不能保证最后一位是\0,导致一些长度等bug！" << endl;
/*
    string str = "aaaaaiiiwwiwa";
    str = StringUtils::replace_all(str, "aa", "@");
    cout << str << endl;
*/
    cout << "--------------BasicTest::test String end----------------" << endl;
}


void BasicTest::testReg()
{
    cout << "--------------BasicTest::testReg() 正则测试 只在linux下能用----------------" << endl;
    /*
    char pattern[512]="finance\\.sina\\.cn|stock1\\.sina\\.cn|3g\\.sina\\.com\\.cn.*(channel=finance|_finance$|ch=stock|/stock/)|dp.sina.cn/.*ch=9&";

    const int times = 1000000;

    const size_t nmatch = 10;
    regmatch_t pm[10];
    int z;
    regex_t reg;
    char lbuf[256]="set",rbuf[256];
    char buf[3][256] = {"finance.sina.cn/google.com/baidu.com.google.sina.cndddddddddddddddddddddda.sdfasdfeoasdfnahsfonadsdf",
                    "3g.com.sina.cn.google.com.dddddddddddddddddddddddddddddddddddddddddddddddddddddbaidu.com.sina.egooooooooo",
                    "http://3g.sina.com.cn/google.baiduchannel=financegogo.sjdfaposif;lasdjf.asdofjas;dfjaiel.sdfaosidfj"};
    printf("input strings:\n");
    timeval end,start;
    gettimeofday(&start,NULL);
    regcomp(&reg,pattern,REG_EXTENDED|REG_NOSUB);
    for(int i = 0 ; i < times; ++i)
    {
        for(int j = 0 ; j < 3; ++j)
        {
            z = regexec(&reg,buf[j],nmatch,pm,REG_NOTBOL);
//          if(z==REG_NOMATCH)
//                printf("no match\n");
//           else
//                printf("ok\n");

        }
    }
    gettimeofday(&end,NULL);
    uint time = (end.tv_sec-start.tv_sec)*1000000 + end.tv_usec - start.tv_usec;
    cout<<time/1000000<<" s and "<<time%1000000<<" us."<<endl;

*/
    cout << "--------------BasicTest::testReg() end----------------" << endl;
}

void BasicTest::testIO()
{
    cout << "--------------BasicTest::testIO() 基础io----------------" << endl;

    cout << "NULL | " << NULL << endl;

    int *p;
    //*p = 120; //mac 下面 不对
    int num = 120;
    p = &num;
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

    //string str = "<b>aaaaa</b>";
   // str.replace()
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


void BasicTest::testPointer()
{
    int * pNum = new int;
    *pNum = 1000;

    cout << "pNum   = " << pNum << endl;
    cout << "&pNum  = " << &pNum << endl;
    cout << "*pNum  = " << * pNum << endl;

    cout << "因为使用new，所以必须delete，否则是内存泄漏！" << endl;
    delete pNum;
    pNum = 0;
    delete pNum;
    cout << "delte 不能2次，但delete用于空指针是安全的!" << endl;

    pNum = new int(10);
    cout << "*pNum  = " << * pNum << endl;
    cout << "若没有delete这个指针，在重写分配新的内存，也会泄漏，并且上一个指针不能访问，就永远释放不掉" << endl;
    pNum = new int(20);
    delete pNum;
    pNum = 0;


}


