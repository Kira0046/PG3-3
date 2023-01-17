#include "Enemy.h"

int Enemy::EnemyCount;

int main() {

	Enemy* enemy1 = new Enemy;
	Enemy* enemy2 = new Enemy;
	Enemy* enemy3 = new Enemy;

	printf("\n“G‚Ì”:%d\n\n", Enemy::EnemyCount);

	delete enemy1;

	printf("\n“G‚Ì”:%d\n", Enemy::EnemyCount);

	return 0;
}