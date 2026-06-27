#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
    srand(time(NULL));
    int answer[4];
    int input[4];
    int count = 0;
    // 重複しない4つの数字を生成
    for (int i = 0; i < 4; i++) {
        while (true) {
            int num = rand() % 10;
            bool duplicate = false;
            for (int j = 0; j < i; j++) {
                if (answer[j] == num) {
                    duplicate = true;
                    break;
                }
            }
            if (!duplicate) {
                answer[i] = num;
                break;
            }
        }
    }
    while (true) {
        count++;
        cout << "重複しない4つの数字を入力してください：" << endl;
        // 入力（重複チェック）
        while (true) {
            bool duplicate = false;
            for (int i = 0; i < 4; i++) {
                cin >> input[i];
            }
            for (int i = 0; i < 4; i++) {
                for (int j = i + 1; j < 4; j++) {
                    if (input[i] == input[j]) {
                        duplicate = true;
                    }
                }
            }
            if (!duplicate)
                break;
            cout << "同じ数字があります。入力し直してください。" << endl;
        }
        int hit = 0;
        int blow = 0;
        // Hit・Blow判定
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (answer[i] == input[j]) {
                    if (i == j)
                        hit++;
                    else
                        blow++;
                }
            }
        }
        cout << "Hit : " << hit << endl;
        cout << "Blow: " << blow << endl;
        if (hit == 4)
            break;
    }
    cout << count << "回でゲームクリア！" << endl;
    return 0;
}