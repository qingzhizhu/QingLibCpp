#ifndef STRINGUTILS_H
#define STRINGUTILS_H


#include   <string>
#include   <iostream>
using   namespace   std;

class StringUtils
{
    public:
        /** Default constructor */
        StringUtils();
        /** Default destructor */
        virtual ~StringUtils();


        /** �滻�����ַ���
         *
         * \param str ����
         * \param old_value Ҫ�滻���ַ���
         * \return new_value �µ��ַ���
         *
         */
        static string& replace_all(string& str, const string& old_value, const string& new_value);


    protected:
    private:
};

#endif // STRINGUTILS_H
