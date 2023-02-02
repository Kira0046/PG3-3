#include "Enemy.h"



int main() {
	Enemy* enemy1 = new Enemy();
	Enemy* enemy2 = new Enemy();
	Enemy* enemy3 = new Enemy();

	enemy1->DrawSurvive();
	enemy2->DrawSurvive();
	enemy3->DrawSurvive();

	enemy3->TriggerDead();
	printf("\n“G‚ðˆêl“|‚µ‚½\n");

	enemy1->DrawSurvive();
	enemy2->DrawSurvive();
	enemy3->DrawSurvive();

	printf("\n");

	enemy1->CheckSurvive();
	enemy2->CheckSurvive();
	enemy3->CheckSurvive();
	
	printf("\n");

	enemy1->DrawSurvive();
	enemy2->DrawSurvive();
	enemy3->DrawSurvive();

	return 0;
}