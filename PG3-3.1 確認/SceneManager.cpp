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
	//printf("現在のシーン:%d\n3秒後に変更\n\n", SceneNo);
	if (SceneNo == 0) {
		printf("現在のシーン:Title\n3秒後に変更\n\n");
	}

	if (SceneNo == 1) {
		printf("現在のシーン:NewGame\n3秒後に変更\n\n");
	}

	if (SceneNo == 2) {
		printf("現在のシーン:GamePlay\n3秒後に変更\n\n");
	}

	if (SceneNo == 3) {
		printf("現在のシーン:GameClear\n3秒後に変更\n\n");
	}
}
