#include<iostream>
#include<string>
using namespace std;

class solution{
    public:
    int i=0;
    int j=0;
    string res="";
    string mergestringalternately(string st1,string st2)
    {
     while(i<st1.size() && j<st2.size())
     {
       res+=st1[i++];
       res+=st2[j++];
     }
     while(i<st1.size())
     {
        res+=st1[i++];
     }
     while(j<st2.size())
     {
        res+=st2[j++];
     }
     return res;
    }
};
int main()
{
    solution merger;
    string str1="ABCD";
    string str2="abcd";
    string merged=merger.mergestringalternately(str1,str2);
    cout<<"resultant string is :"<<merged;
    return 0;
}