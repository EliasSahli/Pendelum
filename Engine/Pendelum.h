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
	float angleV = 0;
	float angleA = 0;
	float gravity = 12.0f;

	int ballRadius = 15;
	int length = 150; 
	int lineThickness = 1;
	float mass = 50.0f;
	float damping = 0.995f;
	
};