#include "Enemy.h"
#include <stdio.h>
#include <Windows.h>

int main() {
	Enemy* enemy = new Enemy();
	int count = 0;

	while (true)
	{
		printf("3秒後にへんこう\n");
		Sleep(3 * 1000);
		enemy->Update();
		count += 1;
		if (count > 6) {
			break;
		}

	}
	

	return 0;
}