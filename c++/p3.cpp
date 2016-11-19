/* Problem 3
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream>
#include <cmath>

int main()
{
    long long num = 600851475143;
    int highest = 1;

    while (num > 1) {
        highest++;
        while (num % highest == 0) {
            num /= highest;
        }
    }

    std::cout << i;
}