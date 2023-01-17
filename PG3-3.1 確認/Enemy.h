#pragma once
#include <stdio.h>
#include <Windows.h>

class Enemy
{
public:
	static int EnemyCount;

	Enemy();
	~Enemy();

private:

};

Enemy::Enemy()
{
	printf("“G‚ªoŒ»\n");
	EnemyCount++;
}

Enemy::~Enemy()
{
	printf("“G‚ğ“|‚µ‚½\n");
	EnemyCount = 0;
}

