// PR c++/51621
// { dg-options -std=c++0x }

struct A
{
  A() {}
};

struct B
{
  A a[1];
  constexpr B() : a() {} // { dg-error "non-constant|non-constexpr" }
};
