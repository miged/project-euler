/* Problem 3
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/

fn main() {
    let mut num: i64 = 600851475143;
    let mut highest = 1;

    while num > 1 {
        highest += 1;
        while num % highest == 0 {
            num /= highest;
        }
    }

    print!("{}", highest);
}