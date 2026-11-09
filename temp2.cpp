#include<iostream>

namespace Math 
{
    namespace Function
    {
        int sum( int first, int second )
        {
            return first + second;
        }
        int dif( int first, int second )
        {
            return first - second;
        }
        int mult( int first, int second )
        {
            return first * second;
        }
        int dyv( int first, int second )
        {
            return first / second;
        }
    }
}

using namespace Math::Function;

int main()
{
    int x (6);
    int y (9);
    std::cout << "x = " << x << " y = " << y << std::endl;
    std::cout << "Сумма: " << sum( x,y ) << std::endl;
    std::cout << "Разность: " << dif( x,y ) << std::endl;
    std::cout << "Умножение: " << mult( x,y ) << std::endl;
    std::cout << "Деление: " << dyv( x,y ) << std::endl;

    return 0;
}


