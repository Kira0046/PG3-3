#pragma once
#include <stdio.h>

class Enemy {
public:
	Enemy();


	void Charge();

	void Shoot();

	void Back();

	void Update();

private:
	static void(Enemy::* pFunc[])();

	int pattern;
};