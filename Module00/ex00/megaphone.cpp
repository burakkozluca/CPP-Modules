#include <iostream>

int  main(int argc, char **argv)
{
    if(argc <= 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        int i = 1;
        while(argv[i] != NULL)
        {
            int j = 0;
            while(argv[i][j] != '\0')
            {
                argv[i][j] = toupper(argv[i][j]);
                j++;
            }
            std::cout << argv[i++];
        }
        std::cout<< std::endl;
    }
}
