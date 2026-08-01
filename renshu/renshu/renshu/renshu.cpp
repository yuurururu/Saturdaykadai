#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdlib.h>

int main()
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int playerHP = 100;
    int playerAttack = 50;
    int command;

    int enemyHP = 300;
    int enemyAttack = 30;

    std::cout << "体力: " << playerHP << std::endl;
    std::cout << "攻撃力: " << playerAttack << std::endl;

    std::cout << "体力: " << enemyHP << std::endl;
    std::cout << "攻撃力: " << enemyAttack << std::endl;

    while (true)
    {
        std::cout << "1:攻撃 2:回復 " << std::endl;
        std::cin >> command;
        
        if (command == 1)
        {
            enemyHP -= playerAttack;
        }
        else if (command == 2)
        {
            playerHP += 50;
        }
        if (playerHP > 100)
        {
            playerHP = 100;
        }
        if (enemyHP <= 0)
        {
            enemyHP = 0;
            std::cout << "勝ち" << std::endl;
            break;
        }
        playerHP -= enemyAttack;

        if (playerHP <= 0)
        {
            playerHP = 0;
            std::cout << "ハイボール" << std::endl;
            break;
        }
        std::cout << "敵の体力 : " << enemyHP << std::endl;
        std::cout << "自分の体力 : " << playerHP << std::endl;

    }

    std::cout << "残り体力 : " << playerHP << std::endl;
    return 0 ;
}