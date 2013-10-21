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


        /** Ìæ»»ËùÓÐ×Ö·û´®
         *
         * \param str ÄÚÈÝ
         * \param old_value ÒªÌæ»»µÄ×Ö·û´®
         * \return new_value ÐÂµÄ×Ö·û´®
         *
         */
        static string& replace_all(string& str, const string& old_value, const string& new_value);


    protected:
    private:
};

#endif // STRINGUTILS_H
