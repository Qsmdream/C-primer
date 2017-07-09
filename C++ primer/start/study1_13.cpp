#include <iostream>
//for 1_19
int main() {
    int sum = 0;
    for(int val = 50; val <= 100; val++) {
        sum += val;
    }
    std::cout << "50 to 100 sums is " << sum << std::endl;
}
