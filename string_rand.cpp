// strings aleatorias

#include <iostream>
#include <random>
#include <string>
#include <algorithm>

std::string random_string()
{
    std::string str("abcdefghijklmnopqrstuvwxyz");
    std::random_device rd;
    std::mt19937 generator(rd());

    shuffle(str.begin(), str.end(), generator);

    return str.substr(0, 10);    // numero de caracteres max é 10        
}

int main()
{
    std::string palavra;

    palavra = random_string();
    std::cout << palavra << std::endl;
}

// KKKKKKKKKKKKKK NÃO ACREDITO Q DEU CERTO