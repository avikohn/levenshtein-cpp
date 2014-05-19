#include <iostream>
#include "levenshteinwrap.h"
using namespace std;
int main()
{
    int cst=0;
    std::string a1("Avi");
    std::string a2("davi");
    /*
    std::cout << lev_edit_distance(
    a1.length(),
    static_cast<const char*>(a1.c_str()),
    a2.length(),
    static_cast<const char*>(a2.c_str()),cst);
    */
    
    cout << Lev::distance(a1,a2)<<","<<Lev::ratio(a1,a2)<<endl;



}
