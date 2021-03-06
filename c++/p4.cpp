/* Problem 4
A palindromic number reads the same both ways. The largest palindrome made
from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>
#define MIN 100
#define MAX 999

int reverse(int num)
{
    int r = 0;
    while (num != 0) {
        r *= 10;
        r += num % 10;
        num /= 10;
    }
    return r;
}

int main()
{
    int a = MIN;
    int b = MIN;
    int product;

    int palindrome = 0;
    int aa = 0;
    int bb = 0;

    while (b != MAX) {
        product = a * b;

        // Checks for a greater palindrome
        if (reverse(product) == product && product > palindrome) {
            palindrome = product;
            aa = a;
            bb = b;
        }

        // Keep looping
        if (a > MAX && b < MAX) {
            a = MIN;
            b++;
        } else {
            a++;
        }
    };

    std::cout << palindrome << " = " << aa << " * " << bb;
}
