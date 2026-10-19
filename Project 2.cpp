#include <iostream>

int firstInteger;
int secondInteger;
char userInput;

int Divide()
{
    do
    {
        std::cout << "Enter two numbers: \n";

        while (!(std::cin >> firstInteger) || !(std::cin >> secondInteger))
        {
            std::cout << "You can only enter a number, enter two numbers: \n";

            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

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
    while (userInput != 'N' && userInput != 'n'); //block of code not needed do is that block of code to be executed, just goes back to it

    std::cout << "Goodbye";

    return 0;
}

int main()
{
    Divide();
}