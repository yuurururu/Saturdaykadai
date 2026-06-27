#include "Compare.h"

void Compare::judge(int ans[], int in[]) {

    hit = 0;
    blow = 0;

    // Hit
    for (int i = 0; i < 4; i++) {
        if (ans[i] == in[i]) {
            hit++;
        }
    }

    // Blow
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {

            if (i != j && ans[i] == in[j]) {
                blow++;
            }
        }
    }
}

int Compare::getHit() {
    return hit;
}

int Compare::getBlow() {
    return blow;
}