#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>


void ft_replace(std::string filename, std::string s1, std::string s2)
{
    std::ifstream file;
    std::ofstream file_1;
    std::string satir;
    std::string file_replaced = s1 + ".replace";
    std::string temp;
    std::string beforeoc;
    std::string afteroc;
    std::size_t pos;

    file.open(filename);

    if(!file.is_open())
    {
        std::cout << "Dosya okunmadi" << std::endl;
    }

    file_1.open(file_replaced);

    while (std::getline(file, temp))
    {
        pos = temp.find(s1);
        while (pos != std::string::npos)
        {
            beforeoc = temp.substr(0, pos);
            afteroc = temp.substr(pos + s1.size(), temp.size());
            //String addition -> we have to careful this line so if you wanna use integer
            //!it isn't important because 5+3 = 3+5 but string red + blue = redblue != blue + red = bluered
            temp = beforeoc + s2 + afteroc;
            pos = temp.find(s1);
        }
        file_1 << temp << std::endl;
    }
    file.close();
    file_1.close();
}

int main(int argc, char **argv)
{
    if(argc != 4)
    {
        std::cout << "Hatali Arguman" << std::endl;
        exit(0);
    }
    else
        ft_replace((std::string)argv[1], (std::string)argv[2], (std::string)argv[3]);
    return(0);
}
