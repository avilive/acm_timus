

#include <iostream>



int main()
{
    int n1, n2; // amount of cans shot
    int m1, m2; // amount of cans missed
    std::cin >> n1 >> n2;
    m1 = (n1 + n2 - 2) - n2 + 1;
    m2= (n1 + n2 - 2) - n1 + 1;

    std::cout << m2<<' '<<m1 << std::endl;
}

