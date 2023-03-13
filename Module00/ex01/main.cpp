#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    std::string input;
    while (input.compare("EXIT"))
    {
        std::cout << "\033[0;36m\033[1mADD, SEARCH, EXIT -->\033[0m";
        std::getline(std::cin, input);
        if(!input.compare("ADD"))
        {
            std::cout << "başarılı" << std::endl;
            //yeni kişi bilgilerinin girdisi
            //kişi telefon defterine eklenir.
            //tüm alanlar doldurulmalı
        }
        else if(!input.compare("SEARCH"))
        {
            std::cout << "SEARCH-->>";
            //Kaydedilen kişileri sütun halinde görüntüleme
            //her sütun 10 karakter genişliğinde olmalı
            //metin sağa hizalı olmalı
            //metin genişlikten uzunsa...
        }
        else
        {
            std::cout << "Çıkış Başarılı" << std::endl;
        }
    }
}