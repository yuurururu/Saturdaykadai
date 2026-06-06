#include <iostream>
#include <string>

// キャラクタ名は64文字まで
const unsigned int NameStringMax = 64;

// キャラクタークラス
class Character final
{
public:
    // コンストラクタの宣言
    Character();

    // 引数付きコンストラクタの宣言
    Character(const char* name);

    // コピーインストラクタ
    Character(const Character& c);

    // デストラクタ
    ~Character();

public:
    // 名前を表示する
    void dispName();

private:
    char* name_ = nullptr; // キャラクタ名を保持するアドレスを持つポインタ
};

// コンストラクタの定義
Character::Character()
{
    name_ = new char[NameStringMax];
    strcpy_s(name_, NameStringMax, "Nanashi");
}

// 引数付きコンストラクタの定義
Character::Character(const char* name)
{
    name_ = new char[NameStringMax];

    int size = strlen(name);
    if (size < NameStringMax)
    {
        strcpy_s(name_, NameStringMax, name);
    }
    else
    {
        strcpy_s(name_, NameStringMax, "Nanashi");
    }
}

// 名前を表示する
void Character::dispName()
{
    std::cout << "名前は " << name_ << std::endl;
}
// デスインストラクタ
Character::~Character()
{
    delete[] name_;
    name_ = NULL;
}

// コピーコンストラクタ
Character::Character(const Character& c)
{
    name_ = new char[NameStringMax];
    strcpy_s(name_, NameStringMax, c.name_);
}


// エントリー関数
int main()
{
    // Ryu と Ken を作成する
    Character* ryu = new Character("Ryu");;
    Character* ken = new Character("Ken");

    // それぞれの名前を表示する
    ryu->dispName();    // Ryu と表示される
    ken->dispName();    // Ken と表示される

    // Nanashi に Ken の内容を複製する
    Character nanashi = *ken;

    // Ken を破棄する
    delete ken;
    ken = NULL;

    // それぞれの名前を表示する
    ryu->dispName();        // Ryu と表示される
    nanashi.dispName();     // Ken と表示される

    // Ryu を破棄する
    delete ryu;
    ryu = NULL;

}
