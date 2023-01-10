#include "test.h"


TestSingleton::TestSingleton() {

}

TestSingleton::~TestSingleton() {

}

TestSingleton* TestSingleton::GetInstance()
{
	static TestSingleton instance;

	return &instance;
}

void TestSingleton::memberFunc()
{
	printf("hi");
}
