#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Random.h"
#include "Input.h"
#include "Compare.h"
#include "ShowResult.h"

using namespace std;

int main() {

    srand(time(NULL));

    Random random;
    Input input;
    Compare comp;
    ShowResult show;

    random.make();

    int count = 0;

    while (true) {

        count++;

        input.read();

        comp.judge(
            random.get(),
            input.get()
        );

        show.show(
            comp.getHit(),
            comp.getBlow()
        );

        if (comp.getHit() == 4) {
            break;
        }
    }

    show.finish(count);
}