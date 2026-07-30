#pragma once
#include <memory>

class CharacterBase;
// ターン制御クラス
class TurnManager final
{
public:
	TurnManager();
	
	~TurnManager() = default;

public:
	// ゲームの開始
	void start();

private:
	// キャラクター選択
	void selectPlayer();
	// 敵キャラクター選択
	void selectEnemy();
	// 行動選択
	void selectAction();

private:

	std::shared_ptr<CharacterBase> player_;
	std::shared_ptr<CharacterBase> enemy_;

	int ActionByPlayer_{}; // プレイヤーキャラの行動
	int ActionByEnemy_{}; // 敵のキャラの行動
	int TurnCount_{}; // ターン数
};

