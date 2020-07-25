#include <iostream>
#include <string>
#include <cctype>
using namespace std;
namespace phonetic{
    bool same_set( int x,int y)
    {
        char a=(char) x;
        char b=(char) y;
     if(((a=='v'||a=='w')&&(b=='v'||b=='w'))||((a=='b'||a=='f'||a=='p')&&(b=='b'||b=='f'||b=='p'))
     ||((a=='g'||a=='j')&&(b=='g'||b=='j'))||((a=='c'||a=='k'||a=='q')&&(b=='c'||b=='k'||b=='q'))
     ||((a=='s'||a=='z')&&(b=='s'||b=='z'))||((a=='d'||a=='t')&&(b=='d'||b=='t'))
     ||((a=='o'||a=='u')&&(b=='o'||b=='u'))||((a=='i'||a=='y')&&(b=='i'||b=='y')))
     {
         return true;
     }
      return false;  
    }    
    bool check_similarity(string current,string target)
    { 
        if(current.length()<target.length()) return false;
        bool set=false;
        for (int i = 0; i < current.length(); i++) {
            if((same_set(tolower(current[i]),tolower(current[i]))==false)&&(same_set(tolower(target[i]),tolower(target[i]))==false))
            {
                continue;
            }
            else if(same_set(tolower(current[i]),tolower(target[i]))==true) //belong to da same suspect set
            {
               set=true;  
            }
            else
            {
               return false;
            }
        }
        if(current.length()>target.length())
        {
            throw std::invalid_argument( "not a full word" );
        }
       
        return true;
    }
string find(string text,string target)
{
    if(target.length()==0) throw std::invalid_argument("empty target");
    if(text.length()==0) throw std::invalid_argument("empty text");
    bool check=false;
    bool not_empty=false;
    string temp="";
    for (int i = 0; i < text.length()+1; i++) {
        if(text[i]==' '||text[i]=='\0') //end of line or end of word !
        {     
               if(check_similarity(temp,target)&&temp.length()!=0)
                {
                    return temp;
                }
       
            temp.clear();
        }
        else if(text[i]!=' '){
        temp+=text[i];
        not_empty=true;
        }
    }
        if(!not_empty)throw std::invalid_argument( "text is empty !" );
        throw std::invalid_argument( "not found !" );
}
};

