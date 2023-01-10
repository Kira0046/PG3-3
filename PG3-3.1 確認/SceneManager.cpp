#include "SceneManager.h"

SceneManager::SceneManager()
{
}

SceneManager::~SceneManager()
{
}



SceneManager* SceneManager::GetInstance()
{
	static SceneManager instance;

	return &instance;
}

void SceneManager::SceneChange()
{
	while (true)
	{
		Sleep(3 * 1000);

		SceneNo += 1;
		if (SceneNo > 3) {
			SceneNo = 0;
			loopCount += 1;
		}

		if (loopCount == 3) {
			break;
		}
		ShowScene();

	}
}

void SceneManager::ShowScene()
{
	//printf("���݂̃V�[��:%d\n3�b��ɕύX\n\n", SceneNo);
	if (SceneNo == 0) {
		printf("���݂̃V�[��:Title\n3�b��ɕύX\n\n");
	}

	if (SceneNo == 1) {
		printf("���݂̃V�[��:NewGame\n3�b��ɕύX\n\n");
	}

	if (SceneNo == 2) {
		printf("���݂̃V�[��:GamePlay\n3�b��ɕύX\n\n");
	}

	if (SceneNo == 3) {
		printf("���݂̃V�[��:GameClear\n3�b��ɕύX\n\n");
	}
}
