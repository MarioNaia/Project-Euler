/* Problem 3: Largest prime factor
 * By: Mark Guerra
 * 10/19/2015
 */

#include "problem003.h"

#include <cmath>

long problem003::getGreatestPrimeFactor(long long num) {
    long i = 2;
    while (pow(i, 2) < num) {
        while (num % i == 0) {
            num /= i;
        }
        i++;
    }
    return num;
}

long problem003::getAnswer() {
    return getGreatestPrimeFactor(600851475143);
}