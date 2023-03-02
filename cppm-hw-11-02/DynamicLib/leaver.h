#pragma once
#include<iostream>

#ifndef DynamicLib_EXPORTS
#define LIB __declspec(dllexport)

#else LIB __declspec(dllimport)

#endif // DynamicLib_EXPORTS



namespace lv
{
	class leaver
	{
	public:
		LIB std::string leave(std::string name);

	private:
		std::string name;

	};
}