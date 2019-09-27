//
//  main.cpp
//  HelloWorld
//
//  Created by Jack Shorenstein on 7/31/19.
//  Copyright © 2019 Apple2007 Scratch Coder. All rights reserved.
//
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    std::string name;
    std::cout<< "HelloWorld, What is your name?";
    getline (std::cin, name);
    std::cout << "Hello, " << name << "! Welcome to our world, a world where we can code and play together!\n";
    std::cout << "I want to know more about you. What is you Fav Food?";
    std::string favfood;
    getline (std::cin, favfood);
    std::cout << "I also love " << favfood << "! Cool!\n";
    std::cout << "I like coding on Xcode. What coding program do you use?";
    std::string codingprogram;
    getline (std::cin, codingprogram);
    std::cout << codingprogram << " is cool.\n";
    std::cout << "So, do you like the iMac or the MacBook Pro?";
    std::string macoptions;
    getline (std::cin, macoptions);
    std::cout << "Cool, I also like the " << macoptions << ". Aparetly, we have a lot of similarities.";
    std::cout << "Alright, thanks for talking with me. Have a great rest of the day!";
    
    

    return 0;
}
