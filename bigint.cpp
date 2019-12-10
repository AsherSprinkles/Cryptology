#include <iostream>

class bigint
{
private:
    unsigned int *data;
    size_t size;
    void grow();
    void shrink();
public:
    bigint();
    bigint(unsigned int);
    ~bigint();
};

bigint::bigint()
{
    size = 1;
    data = new unsigned int[1];
    *data = 0;
}

bigint::bigint(unsigned int initial)
{
    size = 1;
    data = new unsigned int[1];
    *data = 0;
}

bigint::~bigint()
{
    delete data;
}

void bigint::grow()
{
    size += 1;
    unsigned int *newdata = new unsigned int[size];
    *newdata = *data;
    delete data;
    data = newdata;
}