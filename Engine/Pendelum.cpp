#include "Pendelum.h"

void Pendelum::Draw(Graphics& gfx) const
{
	gfx.DrawLine(origin, pos, lineThickness, Colors::LightGray);
	gfx.DrawMidpointCircleFill(pos, ballRadius, Colors::Gray);
	gfx.DrawMidpointCircleFill(pos, ballRadius - 3, Colors::LightGray);
}

void Pendelum::Update()
{
	pos.x = sin(angle) * length;
	pos.y = cos(angle) * length;
	pos += origin;

	angle += 0.01f;
}
