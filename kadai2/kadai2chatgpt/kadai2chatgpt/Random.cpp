#include "Random.h"
#include <cstdlib>
#include <ctime>

void Random::make() {
    for (int i = 0; i < 4; i++) {

        while (true) {
            int num = rand() % 10;

            bool dup = false;

            for (int j = 0; j < i; j++) {
                if (answer[j] == num) {
                    dup = true;
                }
            }

            if (!dup) {
                answer[i] = num;
                break;
            }
        }
    }
}

int* Random::get() {
    return answer;
}