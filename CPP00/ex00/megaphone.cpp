#include <iostream>
#include <string>


int main(int argc, char *argv[])
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    if (argc > 1){
    for (int i = 1; i < argc; i++){
        std::string name = argv[i];
        for (size_t j = 0;j < name.length();j++){
            std::cout << (char)std::toupper(name[j]);
        }
    }
    return 0;
    }
}
