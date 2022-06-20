#include <iostream>
#include <cstdio>

void fib(int previous, int current, int iteration, int limit);

int main() {
    std::cout << "2\n";
    fib(2, 3, 0, 14);
}

/**
 * int previous The previous value of the series.
 * int current The current value of the series.
 * int iteration The current iteration that the series is on.
 * int limit The total iterations to achieve.
 */
void fib(int previous, int current, int iteration, int limit) {
    if (iteration == limit)
        return;
    int nextValue = previous + current;
    iteration++;
    printf("%-10d %.5f\n", current, ((double) current / previous));
    fib(current, nextValue, iteration, limit);
}