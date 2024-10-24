#pragma once
#include "Vector2.h"
#include "../Library/gameObject.h"

class Stage : public GameObject {
public:
	Stage();
	~Stage();
	void Draw() override;
	int IsWallRight(VECTOR2 pos);
	int IsWallLeft(VECTOR2 pos);
	int IsWallUp(VECTOR2 pos);
	int IsWallDown(VECTOR2 pos);
	int hImage;
};