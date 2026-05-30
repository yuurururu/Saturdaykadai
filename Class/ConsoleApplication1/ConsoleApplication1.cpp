#include <iostream>
#include"animal.h"
#include "MyClass.h"
int main()
{
    // アニマルクラスのインスタンス作成
    {
        object::animal animal1;

        object::animal animal2("柿", 2);

        std::cout << "スコープを抜ける" << std::endl;
    }
    /*
    // MyClass のインスタンスを作成する
    MyClass myclass;
    //myclass.valueA = 1;

    // ポインタでアクセスする
    // MyClass* myclassPtr = &myclass;
    // myclassPtr->value = 2;

    // 静的なメンバ変数を使う
    // MyClass valueB = 0;
  */

}

