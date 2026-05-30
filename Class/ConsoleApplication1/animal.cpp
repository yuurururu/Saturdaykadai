#include "animal.h"
#include <iostream>
#include <string>

namespace
{
    void function()
    {
        std::cout << "function" << std::endl;
    }
}

namespace object 
{
    animal::animal()
    {
        std::cout << "コンストラクタが呼ばれました" << std::endl;
        name_ = "動物";
        footNum_ = 4;
    }

    animal::animal(const char* name, int footNum)
    {
        std::cout << "引数付きのコンストラクタが呼ばれました" << std::endl;

        name_ = name;
        footNum_ = footNum;
    }
    animal:: ~animal()
    {
        std::cout << "デストラクタが呼び出されました" << std::endl;

        name_ = "破棄済み";
        footNum_ = 0;
    }
}

