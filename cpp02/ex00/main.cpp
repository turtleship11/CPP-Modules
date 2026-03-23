#include <iostream>
#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed b(a);
    Fixed c;

    c = b;

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    return 0;
}

//1. Default constructor
//2. Copy constructor
//3. Copy assignment operator
//4. Destructor

//Fixed 클래스 만들고 복사 테스트
//객체가 복사될 때 무슨 일이 일어나는가?