#include "Enemy.h"
#include <stdio.h>
#include <Windows.h>

int main() {
	Enemy* enemy = new Enemy();
	int count = 0;

	while (true)
	{
		printf("3�b��ɂւ񂱂�\n");
		Sleep(3 * 1000);
		enemy->Update();
		count += 1;
		if (count > 6) {
			break;
		}

	}

	delete enemy;

	return 0;
}