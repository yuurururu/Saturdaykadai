#pragma once

// キャラクターパラメータ
struct Parameter
{
	int HP_;
	int Attack_;

};
// キャラクター基底
class Character
{
public:
	// コンストラクタ
	Character() = default;
	// デストラクタ(基底クラスなので仮想関数)
	virtual ~Character() = default;

public:
	// 体力を設定する
	virtual void setHP() = 0;

	// 攻撃力を設定する
	virtual void setAttack() = 0;
	
	// 攻撃する (自身の攻撃力を返すのみ)
	int attack();

	// ダメージを受ける (攻撃してきたキャラの攻撃力を受け取って HP を調整)
	void damage(int power);

	// 死んだかどうか
	bool isDead() const;

	// パラメータを返す (情報を教える)
	Parameter getParameter() const;

protected:
	Parameter param_;
};


