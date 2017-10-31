/* Problem 7
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that
the 6th prime is 13.
What is the 10 001st prime number?
*/

#include <iostream>
#define MAX 10001

bool isPrime(int num)
{
    for (int i = 2; i < num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main()
{
    int primeNum = 0, prime = 2;

    for (;;++prime) {
        if (isPrime(prime)) {
            primeNum++;
            if (primeNum == MAX) break;
        }
    }

    std::cout << prime;
}