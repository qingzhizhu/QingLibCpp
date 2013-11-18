#ifndef BASICTEST_H
#define BASICTEST_H

enum WEEK{MONDAY=9, T, W};

class BasicTest
{
    public:
        BasicTest();
        virtual ~BasicTest();

        /**IO 操作*/
        void testIO();

        /**内存*/
        void testMem();

        /**正则，只有在Linux下面能测试*/
        void testReg();

        /**String的练习*/
        void testString();

        /**指针的一些练习*/
        void testPointer();


    protected:
    private:
};

#endif // BASICTEST_H
