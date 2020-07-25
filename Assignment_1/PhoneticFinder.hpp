#ifndef PHONETICFINDER_H
#define PHONETICFINDER_H
#include <string>
namespace phonetic{
    std::string find(std::string,std::string);
    bool same_set(char,char);
    bool check_similarity(std::string,std::string);
};
#endif