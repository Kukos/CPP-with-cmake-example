#ifndef MATHCLASS_HPP
#define MATHCLASS_HPP

#include <memory>

class Adder
{
private:
    int a {0};
    int b {0};
public:
    Adder(int a, int b) : a {a}, b {b} { }
    virtual int add() const { return a + b; }
};

class MathClass
{
private:
    std::shared_ptr<Adder> adder;
public:
    MathClass(std::shared_ptr<Adder> adder) : adder{adder} { }
    int add() const noexcept(true) { return adder->add(); }
};

#endif