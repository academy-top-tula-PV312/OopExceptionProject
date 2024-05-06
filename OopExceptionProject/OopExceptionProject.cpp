#include <iostream>
#include <exception>

#include "ExampleFirst.cpp"

class MyException : public std::exception
{
    std::string message;
public:
    MyException(std::string message = "Exception!") : message{ message } {}
    const char* what() const noexcept override
    {
        return message.c_str();
    }
};

void funcD()
{
    std::cout << "Start D\n";
    std::cout << "Func D throwing exception\n";

    throw new MyException("Exception in function D");

    std::cout << "Finish D\n";
}

void funcC()
{
    std::cout << "Start C\n";

    funcD();

    std::cout << "Finish C\n";
}

void funcB()
{
    std::cout << "Start B\n";
    
    try
    {
        funcC();
    }
    catch (double ex)
    {
        std::cout << "B catch double exception\n";
    }

    try
    {
    }
    catch (int ex)
    {
        std::cout << "B catch int exception\n";
    }

    std::cout << "Finish B\n";
}

void funcA()
{
    std::cout << "Start A\n";

    try
    {
        funcB();
    }
    catch (std::exception* ex)
    {
        std::cout << "A catch int exception: " << ex->what() << "\n";
        //throw;
    }
    

    std::cout << "Finish A\n";
}


int main()
{
    // ExampleFirst();

    /*std::cout << "Start Main\n";

    try
    {
        funcA();
        std::cout << "Work Main\n";
    }
    catch (int ex)
    {
        std::cout << "Main catch int exception\n";
    }

    std::cout << "Finish Main\n";*/

    int n;
    std::cout << "input n: ";
    std::cin >> n;

    try
    {
        if (n == 0)
            throw 1;

        std::cout << 100 / n << "\n";
    }
    catch (...)
    {
        std::cout << "div error!\n";
    }

}
