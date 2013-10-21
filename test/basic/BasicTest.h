#ifndef BASICTEST_H
#define BASICTEST_H

enum WEEK{MONDAY=9, T, W};

class BasicTest
{
    public:
        BasicTest();
        virtual ~BasicTest();


        void testIO();

        void testMem();


        void testReg();

        void testString();


    protected:
    private:
};

#endif // BASICTEST_H
