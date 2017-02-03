#include <iostream>
#include <limits>
int main ()
{
int a;
int b;
int c;


std::cout << "Podaj pierwsza liczbe: " ;
std::cin >> a ;
std::cin.clear();
std::cin.sync();
std::cout << "Czy udalo sie wczytac? " << std::cin.good() << std::endl;
std::cout << "Czy cos nawalilo? " << std::cin.fail() << std::endl;

bool bCzySukces = std::cin.good();
std::cin.clear();
std::cin.ignore( std::numeric_limits < std::streamsize >::max(), '\n' );
std::cout << "Podaj druga liczbe: " ;
std::cin >> b;
std::cin.clear();
std::cin.sync();
std::cout << "Czy udalo sie wczytac? " << std::cin.good() << std::endl;
std::cout << "Czy cos nawalilo? " << std::cin.fail() << std::endl;

std::cout << "Podaj trzecia liczbe: " ;
std::cin >> c;
std::cin.clear();
std::cin.sync();
std::cout << "Czy udalo sie wczytac? " << std::cin.good() << std::endl;
std::cout << "Czy cos nawalilo? " << std::cin.fail() << std::endl;
std::cin.clear();
std::cin.sync();
std::cout << "Pierwsza liczba = " << a <<  " \t Czy udalo sie wczytac = "  << bCzySukces  << std::endl;
std::cout << "Druga liczba = " << b <<  " \t Czy udalo sie wczytac = "   << bCzySukces << std::endl;
std::cout << "Trzecia liczba = " << c <<  " \t Czy udalo sie wczytac = " << bCzySukces << std::endl;
return 0;
}
