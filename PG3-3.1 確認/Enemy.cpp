#include "Enemy.h"

void(Enemy::* Enemy::pFunc[])() {
	&Enemy::Charge,
		& Enemy::Shoot,
		& Enemy::Back
};

Enemy::Enemy()
{
	pattern = 0;
}

void Enemy::Charge()
{
	printf("�ڋ�\n\nn");
}

void Enemy::Shoot()
{
	printf("�ˌ�\n\n");
}

void Enemy::Back()
{
	printf("���E\n\n");
}

void Enemy::Update()
{
	(this->*pFunc[pattern])();
	pattern += 1;
	if (pattern > 2) {
		pattern = 0;
	}
}
