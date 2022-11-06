#include <iostream>

void add()
{

    std::cout << "Enter values to add: ";

    int a, b;

    std::cin >> a >> b;

    std::cout << "Adding values = " << a + b << std::endl;

    std::cout << std::endl;
}

void subtract()
{
    std::cout << "Enter values to subtract: ";

    int a, b;

    std::cin >> a >> b;

    std::cout << "Subtracted values = " << a - b << std::endl;

    std::cout << std::endl;
}

void multiply()
{
    std::cout << "Enter values to multiply: ";

    int a, b;

    std::cin >> a >> b;

    std::cout << "Multiplied values = " << a * b << std::endl;

    std::cout << std::endl;
}

void divide()
{
    std::cout << "Enter values to divide: ";

    int a, b;

    std::cin >> a >> b;

    std::cout << "Divided values = " << a / b << std::endl;

    std::cout << std::endl;
}

int main()
{
    std::cout << "Enter 0 to turn off scientific calculator" << std::endl;
    std::cout << "Enter 1 for addition" << std::endl;
    std::cout << "Enter 2 for subtraction" << std::endl;
    std::cout << "Enter 3 for multiplication" << std::endl;
    std::cout << "Enter 4 for division" << std::endl;

    std::cout << std::endl;

    int vals;

    while (!0)
    {

        std::cout << "Enter the function: " << std::endl;

        std::cin >> vals;

        switch (vals)
        {
        case 0:
            std::cout << "Program ended" << std::endl;
            return 0;
            break;

        case 1:
            add();
            break;

        case 2:
            subtract();
            break;

        case 3:
            multiply();
            break;

        case 4:
            divide();
            break;

        default:
            std::cout << "Please enter correct function!";
            break;
        }
    }
}