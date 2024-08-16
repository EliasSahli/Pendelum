#pragma once

#include "Vec2.h"
#include "Graphics.h"
#include "FrameTimer.h"
#include "cmath"

class Pendelum
{
public:
	void Draw(Graphics& gfx) const;
	void Update();
private:
	Vec2 origin = { 400,300 };
	Vec2 pos = { 400,400 };
	Vec2 vel;
	float Pi = 3.14159265359;
	
	float angle =  Pi/4;

	int ballRadius = 15;
	int length = 100; 
	int lineThickness = 1;
};