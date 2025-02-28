#include <iostream>
#include <cstdlib>

double add_numbers(double num1, double num2);
double subtract_numbers(double num1, double num2);
double multiply_numbers(double num1, double num2);
double divide_numbers(double num1, double num2);

int main(int argc, char *argv[]) {
    if (argc == 2 && std::string(argv[1]) == "--help") {
        std::cout << "Usage: ./calculator <num1> <operator> <num2>" << std::endl;
        std::cout << "Available operators: +, -, *, /" << std::endl;
        std::cout << "Example: ./calculator 5 + 3" << std::endl;
        return 0;
    }

    if (argc != 4) {
        std::cerr << "Fatal Error: Incorrect args number. Use --help for more information." << std::endl;
        return 1;
    }

    double num1 = std::atof(argv[1]);
    std::string oper = argv[2];
    double num2 = std::atof(argv[3]);
    double result;

    switch (oper) {
        case '+':
            result = add_numbers(num1, num2);
            break;
        case '-':
            result = subtract_numbers(num1, num2);
            break;
        case '*':
            result = multiply_numbers(num1, num2);
            break;
        case '/':
            result = divide_numbers(num1, num2);
            break;
        default:
            std::cerr << "Fatal Error: Unknown operator. Use --help for more information." << std::endl;
            return 1;
    }

    std::cout << "Result: " << wynik << std::endl;
    return 0;
}

double add_numbers(double num1, double num2) {
    return num1 + num2;
}

double subtract_numbers(double num1, double num2) {
    return num1 - num2;
}

double multiply_numbers(double num1, double num2) {
    return num1 * num2;
}

double divide_numbers(double num1, double num2) {
    if (num2 == 0) {
        std::cerr << "Fatal Error: Dividing by zero is absolutely forbidden!"
        return 1;
    }

    return num1 / num2;
}
