/*
 * Problem 57: Square root convergents
 * By: Mark Guerra
 * 9/13/2016
*/

#include "main.h"

/*
 * The solution was determined by finding patterns
 * in the first few iterations of fractions given.
 * The formulas for numerator [n] and denominator [d]:
 *      [n](i+1) = [n](i) + (2 * [d](i))
 *      [d](i+1) = [n(i + 1) - [d](i)
 * The code uses these formulas to determine the next
 * numerator and denominator for 1000 iterations. Each time,
 * if the numerator has more digits than the denominator,
 * increment [c]. Finally, return and print [c].
 */

int Problem057::getAnswer() {
    BigNumber n("3"), d("2");
    int c = 0;
    for (int i = 1; i < 1000; ++i) {
        n = n + (d.multiply(BigNumber("2")));
        d = n - d;
        c += n.digits() > d.digits();
    }
    return c;
}