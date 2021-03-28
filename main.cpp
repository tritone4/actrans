#include "all.h"

int main(){

//    std::string line;
//
//    while (getline(std::cin, line)){
//        std::cout << "(" << line << ")" << std::endl;
//    }

// iterator
    class eki {
        std::string ecode;
        std::string ename;
    };

    std::vector<eki> ekiv = {};
    std::vector<int> v = {111111,222222,333333,444444,555555};

    auto i = std::begin(v);
    eki e;
    

    for ( int val : v ){
        e = new eki;
        e.ecode = std::to_string(val);
        e.ename = e.ecode + "station";

        eki.push_back(e);
    }

    for ( eki eval : ekiv ){
        std::cout << "ecode=" << eval.ecode << " / ename=" << eval.ename << std::endl;
    }
}
