#pragma once
class Counter
{
public:
    Counter(int counter);

    void increment();

    void decrement();

    int getItem();

private:
    int counter;
};