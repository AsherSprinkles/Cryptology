#include <iostream>
#include <cinttypes>
#include <vector>

class bigint
{
private:
    std::vector<uint16_t> data;
public:
    bigint();
    bigint(uint16_t);
    ~bigint();

    bigint operator=(const uint16_t &d);
    bigint operator=(const bigint &other);
    friend std::ostream &operator<<(std::ostream &out, bigint b);
};

bigint::bigint()
{
    data.push_back(0);
}

bigint::bigint(uint16_t initial)
{
    data.push_back(initial);
}

bigint::~bigint()
{
}

bigint bigint::operator=(const uint16_t &d)
{
    data.assign(1, d);
}

std::ostream &operator<<(std::ostream &out, bigint b)
{
    
    return out;
}

int main()
{
    bigint big;
    std::cout << big << std::endl;
    return 0;
}