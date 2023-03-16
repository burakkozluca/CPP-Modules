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
                std::cout << "Enter Name ==>";
                std::getline(std::cin, p.people[p.sayac].name);
                std::cout << "Enter Surname ==>";
                std::getline(std::cin, p.people[p.sayac].surname);
                std::cout << "Enter Nick Name ==>";
                std::getline(std::cin, p.people[p.sayac].nickname);
                std::cout << "Enter Telephone Number ==>";
                std::getline(std::cin, p.people[p.sayac].number);
                std::cout << "Enter Secret ==>";
                std::getline(std::cin, p.people[p.sayac].secret);
                if(p.people[p.sayac].name.empty())
                {
                    std::cout << "\033[0;31m\033[1mAll fields must be filled out\033[0m" << std::endl;
                }
                else
                {
                    p.sayac++;
                    break;
                }
            }
            if(p.sayac == 8)
                p.sayac = 0;
        }
        else if(!input.compare("SEARCH"))
        {
            std::string id;
            int k;
            int i = 1;
            std::cout << "\033[0;35m\033[1m         <>----SEARCH----<>\033[0m" << std::endl;
            while(i <= 8)
            {   
                std::cout << std::setw(2) << i;
                std::cout << std::right << std::setw(10) << (p.people[i - 1].name.size() > 10 ? p.people[i - 1].name.substr(0,9) + "." : p.people[i - 1].name) << "|"; 
                std::cout << std::right << std::setw(10) << (p.people[i - 1].surname.size() > 10 ? p.people[i - 1].surname.substr(0,9) + "." : p.people[i - 1].surname) << "|";
                std::cout << std::right << std::setw(10) << (p.people[i - 1].nickname.size() > 10 ? p.people[i - 1].nickname.substr(0,9) + "." : p.people[i - 1].nickname) << std::endl;
                i++;
            }
            while (42)
            {
                std::cout << "Dizin numarası ==>";
                std::getline(std::cin, id);
                k = atoi(id.c_str());
                if(k > 8)
                    std::cout << "Wrong Index" << std::endl;
                else
                {
                    std::cout << p.people[k - 1].name << std::endl; 
                    std::cout << p.people[k - 1].surname << std::endl;
                    std::cout << p.people[k - 1].nickname << std::endl;
                    std::cout << p.people[k - 1].number << std::endl;
                    std::cout << p.people[k - 1].secret << std::endl;
                    break;
                }
            }
        }
        else if(!input.compare("EXIT"))
        {
            std::cout << "\033[0;31m\033[1m<----->ÇIKIŞ BAŞARILI<----->\033[0m" << std::endl;
        }
        else
        {
            std::cout << "\033[0;33m\033[1m<----->Lütfen Geçerli Bir Komut Girin<----->\033[0m" << std::endl;
        }
    }
}