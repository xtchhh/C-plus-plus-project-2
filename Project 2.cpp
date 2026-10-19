#include <iostream>

int firstInteger, secondInteger;
char userInput;

int Divide()
{
    do
    {
        std::cout << "Enter two numbers: \n";

        while (!(std::cin >> firstInteger) || !(std::cin >> secondInteger))
        {
            std::cout << "\n" << "You can only enter a number, enter two numbers: \n";

            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        if (firstInteger % secondInteger == 0)
        {
            std::cout << "\n" << firstInteger << " is divisible by " << secondInteger << " \n";
        }
        else
        {
            std::cout << "\n" << firstInteger << " is not divisible by " << secondInteger << " \n";
        }

        std::cout << "\n" << "Would you like to repeat this program? Please enter Y or N: ";
        std::cin >> userInput;
        std::cout << "\n";
    } 
    while (userInput != 'N' && userInput != 'n'); //block of code not needed do is that block of code to be executed, just goes back to it

    std::cout << "\n" << "Goodbye";

    return 0;
}

int main()
{
    Divide();
}