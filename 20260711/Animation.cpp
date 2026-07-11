#include "Animation.h"

//=============================
// コンストラクタ
//=============================
Animation::Animation()
{

	//画面画像をNULLポインターとして初期化
	images = nullptr;
	//開始フレーム
	startFrame = 0;
	//再生フレーム
	frameCount = 1;
	//idleのスピード
	speed = 10;
	//再生開始時間
	startTime = 0;
}
//==============================
// 分割画像設定
//==============================
void Animation::SetImages(int* img)
{
	images = img;
}

//============================
// アニメーション再生
//============================
void Animation::Play(int start, int frame, int spd)
{
	//アニメーションの開始位置
	startFrame = start;
	//再生するフレーム数設定
	frameCount = frame;
	//アニメーション速度を設定
	speed = spd;
}

//======================
// 現在描画する画像取得
//======================

int Animation::GetImage(int crrentTime)
{
	//=========================
	// アニメーション番号計算
	//=========================

	int fram = (crrentTime / speed) % frameCount;
	return images[startFrame + fram];
}