
#include   <string>
#include   <iostream>

#include <sys/types.h>
#include <regex.h>

using   namespace   std;

string&   replace_all(string&   str,const   string&   old_value,const   string&   new_value)
{
    while(true)   {
        string::size_type   pos(0);
        if(   (pos=str.find(old_value))!=string::npos   )
            str.replace(pos,old_value.length(),new_value);
        else   break;
    }
    return   str;
}
string&   replace_all_distinct(string&   str,const   string&   old_value,const   string&   new_value)
{
    for(string::size_type   pos(0);   pos!=string::npos;   pos+=new_value.length())   {
        if(   (pos=str.find(old_value,pos))!=string::npos   )
            str.replace(pos,old_value.length(),new_value);
        else   break;
    }
    return   str;
}


void replaceHtml(string &str)
{
    cout << "replaceHtml" <<endl;
    //ÕýÔòÌæ»»?
   // BACommUtil::replaceAll(str, "<br/>", "\n");ss

    int end = 0, len = 0;
    //str = "<b>aaaa</b><br><font color='0xFF'>hello</font>aaa<b>zzzzz</b>";
    for(string::size_type pos(0); pos != string::npos; )   {
        if((pos=str.find("<",end)) != string::npos){
            end = str.find(">", 0);
            len = end - pos +1;
            str.replace(pos, len, "");
            end = end - len +1;
        }
        else   break;
    }


}
int   main()
{
    string str1 = "12212";
    cout   <<   replace_all(str1,"12","21")   <<   endl;
    cout << "str1:" << str1 << endl;
    str1 = "12212";
    cout   <<   replace_all_distinct(str1,"12","21")   <<   endl;
    cout << "str1:" << str1 << endl;


//-----------------------------------------------------------------


    str1 = "<b>aaa</b><br/><font color='0xFF'> hello </font>";
    replaceHtml(str1);

    cout << str1 << endl;


    int status , i;
    int cflags = REG_EXTENDED;
    regmatch_t pmatch[1];
    const size_t nmatch = 1;
    regex_t reg;
    const char * pattern = "<[^>]+>";//"<[\\s]*?font[^>]*?>[\\s\\S]*?<[\\s]*?/[\\s]*?font[\\s]*?>";//"^\\w+([-+.]\\w+)*@\\w+([-.]\\w+)*.\\w+([-.]\\w+)*$";
    char * buf = "<font size=¡®11¡¯>qing11@163.com</font>";
    regcomp(&reg, pattern, cflags);
    status = regexec(&reg, buf, nmatch, pmatch, 0);
    if(status == REG_NOMATCH){
        cout << "no match" << endl;
    }else if(status == 0){
        cout << "match" << endl;
        for(i=pmatch[0].rm_so; i<pmatch[0].rm_eo; i++)
            putchar(buf[i]);

    }
    regfree(&reg);
str1 = buf;



return 0;
}




/*
void BALanguage::replaceHtml(String &str)
{
    //正则替换?
    BACommUtil::replaceAll(str, "<br/>", "\n");
    int end = 0, len = 0;
//    str = "<b>aaaa</b><br><font color='0xFF'>hello</font>aaa<b>zzzzz</b>lll";
    for(string::size_type pos(0); pos != string::npos; )   {
        if((pos=str.find("<",pos)) != string::npos){
            end = str.find(">", pos);
            len = end - pos +1;
            str.replace(pos, len, "");
        }
        else   break;
    }
}
*/












