#pragma once
#include <stdio.h>
#include <Windows.h>
#include <stdio.h>

class Enemy
{
public:
	Enemy();
	~Enemy();

	bool IsSurvive();

	void CheckSurvive();

	void TriggerDead();

	void DrawSurvive();
public:
	static bool AllSurvive;

private:
	bool isSurvive;
};



