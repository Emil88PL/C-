#include <iostream>
#include <limits>
int main()
{
int a, b, c;
std::cout <<"Podaj pierwsza liczbe: ";
std::cin >> a;
bool bCzySukces = std::cin.good();
std::cin.clear();
std::cin.sync();
std::cout << "Udalo sie wczytac? " << std::cin.good() <<std::endl;
std::cout << "Nie udalo sie? " << std::cin.fail() <<std::endl;
std::cin.clear();
std::cin.sync();
std::cout <<"Podaj druga liczbe ";
std::cin >> b;
std::cin.clear();
std::cin.sync();
std::cout << "Udalo sie wczytac? " << std::cin.good() <<std::endl;
std::cout << "Nie udalo sie? " << std::cin.fail() <<std::endl;
std::cin.clear();
std::cin.sync();
std::cout <<"Podaj trzecia liczbe ";
std::cin >> c;
std::cout << "Udalo sie wczytac? " << std::cin.good() <<std::endl;
std::cin.clear();
std::cin.sync();
std::cout << "Nie udalo sie? " << std::cin.fail() <<std::endl;
std::cin.clear();
std::cin.sync();
return 0;
}
