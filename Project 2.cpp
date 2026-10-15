#include <iostream>

int firstInteger;
int secondInteger;
char userInput;

int Divide()
{
    while (userInput != 'N' && userInput != 'n')
    {
        std::cout << "Enter a number: ";
        std::cin >> firstInteger;

        std::cout << "Enter another number: ";
        std::cin >> secondInteger;

        if (firstInteger % secondInteger == 0)
        {
            std::cout << firstInteger << " is divisible by " << secondInteger << " \n";
        }
        else
        {
            std::cout << firstInteger << " is not divisible by " << secondInteger << " \n";
        }

        std::cout << "Would you like to repeat this program? Please enter Y or N: ";
        std::cin >> userInput;
    }
    std::cout << "Goodbye";

    return 0;
}

int main()
{
    Divide();
}