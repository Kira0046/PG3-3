#include "Enemy.h"

bool Enemy::AllSurvive = false;
Enemy::Enemy()
{
	isSurvive = true;
	AllSurvive = true;
}

Enemy::~Enemy()
{
}

bool Enemy::IsSurvive()
{
	return isSurvive;
}

void Enemy::CheckSurvive()
{
	if (AllSurvive == false) {
		isSurvive = false;
	}
}

void Enemy::TriggerDead()
{
	isSurvive = false;
	AllSurvive = false;
}

void Enemy::DrawSurvive()
{
	if (IsSurvive()) {
		printf("ê∂ë∂\n");
	}
	else {
		printf("éÄñS\n");
	}
}
