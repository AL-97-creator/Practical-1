#include <iostream> 
#include <cstring>

  void print_pass_fail(char grade){
    switch(grade) {
        case 'A': case 'B': case 'C':
            std::cout << "Pass" << std::endl;
            break;
        case 'D': case 'E':
            std::cout << "Fail" << std::endl;
            break;
        default:
            std::cout << "Nothing" <<std:endl;
            break;
        }
    }
