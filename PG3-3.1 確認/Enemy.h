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
	printf("�G���o��\n");
	EnemyCount++;
}

Enemy::~Enemy()
{
	printf("�G��|����\n");
	EnemyCount = 0;
}

