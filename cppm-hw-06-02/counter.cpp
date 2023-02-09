#include "counter.h"

Counter::Counter(int counter) { this->counter = counter; }

void Counter::increment() { ++counter; }

void Counter::decrement() { --counter; }

int Counter::getItem() { return counter; }
