#include "SceneManager.h"

int main() {
	SceneManager::GetInstance()->ShowScene();
	SceneManager::GetInstance()->SceneChange();

	return 0;
}