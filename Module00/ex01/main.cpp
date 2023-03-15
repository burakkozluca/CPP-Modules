#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <string.h>
#include <iomanip>

int main()
{
    PhoneBook p;

    p.sayac = 0;
    std::string input;
    while (input.compare("EXIT"))
    {
        std::cout << "\033[0;36m\033[1mADD, SEARCH, EXIT -->\033[0m";
        std::getline(std::cin, input);
        if(!input.compare("ADD"))
        {   
            while(42)
            {
                std::cout << "Name:";
                std::getline(std::cin, p.people[p.sayac].name);
                std::cout << "Surname:";
                std::getline(std::cin, p.people[p.sayac].surname);
                std::cout << "Nick Name:";
                std::getline(std::cin, p.people[p.sayac].nickname);
                std::cout << "Telephone Number:";
                std::getline(std::cin, p.people[p.sayac].number);
                std::cout << "Secret:";
                std::getline(std::cin, p.people[p.sayac].secret);
                if(p.people[p.sayac].name.empty())
                {
                    std::cout << "tüm alanlar doldurulmalı" << std::endl;
                }
                else
                    p.sayac++;
            }
            if(p.sayac == 7)
                p.sayac = 0;
        }
        else if(!input.compare("SEARCH"))
        {
            int i = 1;
            std::cout << "\033[0;35m\033[1m                  <>----SEARCH----<>\033[0m" << std::endl;
            while(i <= 8)
            {   
                std::cout << std::right << std::setw(10) << i << "|";
                std::cout << std::right << std::setw(10) << (p.people[i - 1].name.size() > 10 ? p.people[i - 1].name.substr(0,9) + "." : p.people[i - 1].name) << "|"; 
                std::cout << std::right << std::setw(10) << (p.people[i - 1].surname.size() > 10 ? p.people[i - 1].surname.substr(0,9) + "." : p.people[i - 1].surname) << "|";
                std::cout << std::right << std::setw(10) << (p.people[i - 1].nickname.size() > 10 ? p.people[i - 1].nickname.substr(0,9) + "." : p.people[i - 1].nickname) << "|";
                std::cout << std::right << std::setw(10) << (p.people[i - 1].number.size() > 10 ? p.people[i - 1].number.substr(0,9) + "." : p.people[i - 1].number) << "|" << std::endl;
                i++;
            }
        }
        else if(!input.compare("EXIT"))
        {
            std::cout << "\033[0;31m\033[1m<----->ÇIKIŞ BAŞARILI<----->\033[0m" << std::endl;
        }
        else
        {

        }
    }
}