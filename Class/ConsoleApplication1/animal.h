#pragma once
#include <string>

namespace object
{
    class animal final {
        // 引数なしコンストラクタ宣言
    public:
        animal();

    public:
        ~animal();

        // 引数付きコンストラクタ宣言
    public:
        animal(const char* name, int footNum);
        // 中身
    public:
        std::string   name_ = {};
        int           footNum_ = 0;
    };
}

namespace chara 
{


}

