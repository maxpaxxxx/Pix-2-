#pragma once

struct Vector2
{
	float x;
	float y;

	constexpr Vector2() : x(0.0f), y(0.0f) {}
	constexpr Vector2(float _s) : x(_s), y(_s) {}
	constexpr Vector2(float _x, float _y) : x(_x), y(_y) {}

	Vector2 operator+(const Vector2& rhs) const { return { x + rhs.x, y + rhs.y }; }
	Vector2 operator-(const Vector2& rhs) const { return { x - rhs.x, y - rhs.y }; }
	Vector2 operator*(const float s) const { return { x * s, y * s}; }
	Vector2 operator/(const float s) const { return { x / s, y / s}; }

	Vector2& operator+=(const Vector2& rhs) { x += rhs.x; y += rhs.y; return *this; }
	Vector2& operator-=(const Vector2& rhs) { x -= rhs.x; y -= rhs.y; return *this; }
	Vector2& operator*=(const Vector2& rhs) { x *= rhs.x; y *= rhs.y; return *this; }
	Vector2& operator/=(const Vector2& rhs) { x /= rhs.x; y /= rhs.y; return *this; }
};