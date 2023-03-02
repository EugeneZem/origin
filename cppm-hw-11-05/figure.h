#pragma once

#ifndef DynamicLib_EXPORTS
#define LIB __declspec(dllexport)

#else LIB __declspec(dllimport)

#endif // DynamicLib_EXPORTS


class Figure
{
protected:
    int sideCounter;
public:
    LIB Figure();
    LIB int getSide();
    LIB virtual void print_info();
};
