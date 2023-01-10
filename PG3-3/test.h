#pragma once
#include <stdio.h>


class TestSingleton final{
private:
	TestSingleton();
	
	~TestSingleton();

	

public:
	TestSingleton(const TestSingleton& obj) = delete;
	TestSingleton& operator=(const TestSingleton&obj)= delete;


	static TestSingleton* GetInstance();

	void memberFunc();

};