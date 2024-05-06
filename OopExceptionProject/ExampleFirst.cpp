//#include <iostream>
//
//double Div(double x, double y)
//{
//    if ((int)y == 0) throw 0.0;
//    return x / y;
//}
//
//void Hello(std::string name)
//{
//    if (name == "") throw "empty";
//
//    std::cout << "Hello " << name << "\n";
//}
//
//int& InputAge()
//{
//    int age;
//    std::cout << "Input age: ";
//    std::cin >> age;
//    if (age < 0) throw - 1;
//
//    return age;
//}
//
//void ExampleFirst()
//{
//    double x{ 5.5 };
//    double y{ 1.2 };
//    std::string name = "";
//
//    try
//    {
//        std::cout << Div(x, y) << "\n";
//        Hello(name);
//        int age = InputAge();
//    }
//    catch (int ex)
//    {
//        std::cout << "Age must be positive\n";
//    }
//    catch (double ex)
//    {
//        std::cout << "Divide by zero\n";
//    }
//    catch (std::string ex)
//    {
//        std::cout << "Empty name\n";
//    }
//    catch (...)
//    {
//        std::cout << "Error\n";
//    }
//}