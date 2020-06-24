#include <iostream>
#include <string>
#include <stdlib.h>
#include <cctype>
#include <cstdlib>
#include <random>
#include <time.h>


int main () {
    
    int minimum;
    int maximum;
    std::string user_response;

    srand(time(NULL));
while(user_response != "y" || user_response != "Y") {
    std::cout << "\n";
    std::cout << "Please input the minimum number\n";
    std::cout << "Minimum: ";
    std::cin >> minimum;
    std::cout << "Please input the maximum number\n";
    std::cout << "Maximum: ";
    std::cin >> maximum;
    
    std::cout << "Your number is: " << rand() % (maximum - minimum + 1) + minimum;
    
    for (std::string::iterator i = user_response.begin(); i < user_response.end(); i++){
        *i = tolower(*i);
    }
    std::cout << "\n";
    std::cout << "Do you wish to exit?\n";
    std::cout << "Answer: (Y or N) ";
    std::cin >> user_response;

    if (user_response == "Y" || user_response == "y") {
        std::cout << "See you next time!";
        return(0);
    }
    else if (user_response != "n" && user_response != "y") {
        for (std::string::iterator i = user_response.begin(); i < user_response.end(); i++){
        *i = tolower(*i);
        }
    do {
        std::cout << "Error: Incorrect answer format, please try again";
        std::cout << "\n";
    std::cout << "Do you wish to exit?\n";
    std::cout << "Answer: (Y or N) ";
    std::cin >> user_response;
    }
    while(user_response != "n" && user_response != "y");
    }
    
}

    
}