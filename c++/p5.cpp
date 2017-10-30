/* Problem 5
2520 is the smallest number that can be divided by each of the numbers from 1
to 10 without any remainder.

What is the smallest positive number that is evenly divisible (divisible with
no remainder) by all of the numbers from 1 to 20?
*/

#include <iostream>
#define MAX 20

int main()
{
    int a = 1;

    for (int i = 1; i < MAX; i++) {
        if (a % i != 0) {
            a++;
            i = 1;
        }
    }

    std::cout << a;
}