#include "ShowResult.h"
#include <iostream>

using namespace std;

void ShowResult::show(int hit, int blow) {

    cout << "Hit : " << hit << endl;
    cout << "Blow: " << blow << endl;
}

void ShowResult::finish(int count) {

    cout << count << "‰ñ‚ÅƒNƒŠƒAI" << endl;
}