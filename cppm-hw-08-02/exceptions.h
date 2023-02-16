#pragma once

class MyException : public std::domain_error
{
public:
    MyException(const char* err);
};