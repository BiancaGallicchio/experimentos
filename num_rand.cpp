// Criando numeros diferentes toda vez.

#include <iostream>
#include <random>
#include <string>
#include <algorithm>
using namespace std;

int geraPeso()
{
    string str("56789");
    int num;
    random_device rd;
    mt19937 generator(rd());

    shuffle(str.begin(), str.end(), generator);
    num = stoi(str.substr(0, 2));
    return num;    // numero de caracteres max é 10        
}

int main()
{
    int peso;
    peso = geraPeso(); // stoi() é uma função capaz de transformas string em int.
    cout << peso << endl;
    cout << peso + 1 << endl;
    cout << peso  - 1 << endl;

    return 0;
}
