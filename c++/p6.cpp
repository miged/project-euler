/* Problem 6
The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)2 = 552 = 3025

Hence the difference between the sum of the squares of the first ten natural
numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred
natural numbers and the square of the sum.
*/

#include <iostream>
#define MAX 100

int main()
{
    int sumOfSquares = 0, squareOfSum = 0;

    for (int i = 1; i <= MAX; i++) {
        sumOfSquares += i * i;
        squareOfSum += i;
    }

    int difference = (squareOfSum * squareOfSum) - sumOfSquares;
    std::cout << difference;
}