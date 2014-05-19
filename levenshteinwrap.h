using namespace std;
#include <iostream>
#include "Levenshtein.h"
struct  Lev
{

    static double ratio(string &a1,
                 string &a2)
    {
    return lev_jaro_ratio(
    a1.length(),
    static_cast<const char*>(a1.c_str()),
    a2.length(),
    static_cast<const char*>(a2.c_str()));


    }
    static int distance(string &a1,string &a2)
    { 
        int x=0;
        int z=lev_edit_distance(
    a1.length(),
    static_cast<const char*>(a1.c_str()),
    a2.length(),
    static_cast<const char*>(a2.c_str()),
    x
        );
        return z;


    }

};
