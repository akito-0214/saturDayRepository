#include "FremeManager.h"
//===========================
// コンストラクタ
//===========================
FrameManager::FrameManager()
{
	//フレームカウンターを初期化
	frameContetr = 0;

}
//=============================
// 更新
//=============================
void FrameManager::Update()
{
	//フレームカウンターを更新
	frameContetr++;
}
//=========================
// 現在のフレーム取得
//==========================

int FrameManager::GetFrameCounter()const
{
	//フレームカウンターを返す
	return frameContetr;
}
