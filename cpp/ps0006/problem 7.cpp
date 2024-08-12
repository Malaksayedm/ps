#include <iostream>
#include <stdexcept>

void counter(int end, int start = 0, int step = 1);

int main(void)
{
    // Running my valid test cases 3/3
    counter(5); // 0 1 2 3 4 5
    std::cout << "===============" << std::endl;

    counter(3, 1); // 1 2 3
    std::cout << "===============" << std::endl;

    counter(-21, 6, -3); // 6 3 0 -3 -6 -9 -12 -15 -18 -21
    std::cout << "===============" << std::endl;

    counter(10, 10, 0); // 10
    std::cout << "===============" << std::endl;

    // Running invalid test cases, have to give clear error 3/4
    counter(100, 10, 0); // Error: can't start from 10 to 100 with step 0
    std::cout << "===============" << std::endl;

    counter(10, 10, 3); // Error: can't start from 10 to 10 with step 3
    std::cout << "===============" << std::endl;

    counter(33, 33, -4); // Error: can't start from 33 to 33 with step -4
    std::cout << "===============" << std::endl;

    counter(-15, 11, 4); // Error: can't start from -15 to 11 with step 4
    std::cout << "===============" << std::endl;

    counter(3, 1, -1); // Error: can't start from 1 to 3 with step -1
    std::cout << "===============" << std::endl;

    counter(-1, 3); // Error: can't start from 3 to -1 with step 1
    std::cout << "===============" << std::endl;

    counter(-1, -8, 3); // Error: can't start from -8 to -1 with step 3
    std::cout << "===============" << std::endl;

    counter(-8, 31, -2); // Error: can't start from 31 to -8 with step -2
    std::cout << "===============" << std::endl;

    // Running bonus test cases +0
    counter(100, 1); // 1 2 3 4 5 6 ... 95 96 97 98 99 100
    std::cout << "===============" << std::endl;

    counter(100); // Massive number of iterations for our humble counter
    std::cout << "===============" << std::endl;

    counter(200, -44); // Massive number of iterations for our humble counter

    return 0;
}

void counter(int end, int start, int step) {
    if (step == 0) {
        if (start == end) {
            std::cout << start << std::endl;
        } else {
            std::cout << "Error: can't start from " << start << " to " << end << " with step 0" << std::endl;
        }
        return;
    }

    if (start == end) {
        std::cout << "Error: can't start from " << start << " to " << end << " with step " << step << std::endl;
        return;
    } // you forgot to validate that case

    if ((step > 0 && start > end) || (step < 0 && start < end)) {
        std::cout << "Error: can't start from " << start << " to " << end << " with step " << step << std::endl;
        return;
    }

    int x= end - start;
    if (x % step != 0) {
        std::cout << "Error: the difference " << x<< " is not divisible by step " << step << std::endl;
        return;
    }

    for (int i = start; (step > 0) ? (i <= end) : (i >= end); i += step) {
        std::cout << i << "\n ";
    }
    std::cout << std::endl;
}
// great work 😎 9/10 ⭐
