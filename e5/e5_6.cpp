/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Exercise 5.6

string middle(string str)
that returns a string containing the middle character in str if the length of str is odd, 
or the two middle characters if the length is even. For example, middle("middle") returns "dd".
*/

#include <iostream>
#include <string>

std::string middle(std::string str);

int main() {
    std::cout << middle("scandal") << std::endl;

return 0;
}

std::string middle(std::string str) { 
    if(str.length() % 2 == 0 && str.length() > 3) { 
        return str.substr(str.length() / 2 - 1, str.length() / 2 - 2);
    } else if (str.length() % 2 != 0 && str.length() > 3) { 
        return str.substr(str.length() / 2, str.length() / 2 - 2);
    } else {
        return "";
    }
    
    return "";
}
