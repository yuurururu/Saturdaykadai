#pragma once
#include <memory>

struct Parameter
{
	int hp{}; // 体力
	int attack{}; // 攻撃力
};

// キャラクター基底クラス
class CharacterBase
{
public:
	// コンストラクタ
	CharacterBase();
	// デストラクタ
	virtual ~CharacterBase();

public:
	// 初期化する
	void initialize();
	// 攻撃する
	virtual int attack();
	// ダメージを受ける
	void damage(int power);
	// 死亡判定
	bool dead() const;
	// 名前を取得
	const char* name() const;
	// パラメータを取得
	const Parameter& param() const;
	// 所属陣営を取得
	int faction() const;
	// キャラクターIDを取得
	int charaID() const;

public:
	// 種類の初期化
	virtual void initializeType() = 0;
	// ターン開始時の処理
	virtual void updateWhenStartTurn() = 0;

protected:
	Parameter param_{}; // キャラクターパラメータ
	char name_[64]; // キャラクター名
	int charaID_{}; // キャラクターID
	int faction_{}; // 所属陣営
};

