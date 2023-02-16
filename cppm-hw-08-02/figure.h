#pragma once
class Figure
{
protected:
    int sideCounter;
public:
    Figure();
    int getSide();
    virtual void print_info();
};
