#include <iostream>

int main()
{
    char L;
    std::cin >> L;
    
    int value = L - 'A' + 1;
    
    std::cout << value << std::endl;

    return 0;
}
