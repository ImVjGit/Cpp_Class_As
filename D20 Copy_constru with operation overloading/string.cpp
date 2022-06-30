#include <iostream>
#include <string.h>
using namespace std;

class String
{
    char *str;
    int length;

public:
    String()
    {
        length = 0;
        str = NULL;
    }
    String(const char *s)
    {
        length = strlen(s);
        str = new char[length + 1];
        strcpy(str, s);
    }
    String(String &st)
    {
        length = st.length;
        str = new char[length + 1];
        strcpy(str, st.str);
    }
    void Display()
    {
        cout << "\n Length = " << length;
        cout << "\n String = " << str;
    }

    ~String()
    {
        delete[] str;
    }
     String operator+(String &st)
    {
        String t;
        t.length=this->length+st.length;
        t.str=new char[t.length+1];   
        strcpy(t.str,this->str);
        strcpy(t.str,st.str);
        return t;

    }

    void operator=(String &st)
    {
        if(this->str!=NULL)
        {
            delete this->str;
        }

        this->length=st.length;
        str=new char [length+1];
        strcpy(str,st.str);
    }
    char &operator[](int x)
    {
        return str[x-1];
    }
  //  friend ostream &operator<<(ostream &, String &)
 //   {
 //   }

  //  friend istream &operator>>(istream &, String &)
 //   {
 //   }
};

int main()
{
    String s1("rana");
    String s2("ionew");
    String s3;
  // s3 = s1+ s2;
    s2.Display();
    


}