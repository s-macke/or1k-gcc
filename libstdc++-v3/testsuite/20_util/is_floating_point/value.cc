// { dg-options "-std=gnu++0x" }
//
// Copyright (C) 2011 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

#include <type_traits>
#include <testsuite_hooks.h>
#include <testsuite_tr1.h>

void test01()
{
  bool test __attribute__((unused)) = true;
  using std::is_floating_point;
  using namespace __gnu_test;

  VERIFY( (test_category<is_floating_point, void>(false)) );
  VERIFY( (test_category<is_floating_point, char>(false)) );
  VERIFY( (test_category<is_floating_point, signed char>(false)) );
  VERIFY( (test_category<is_floating_point, unsigned char>(false)) );
#ifdef _GLIBCXX_USE_WCHAR_T
  VERIFY( (test_category<is_floating_point, wchar_t>(false)) );
#endif
  VERIFY( (test_category<is_floating_point, short>(false)) );
  VERIFY( (test_category<is_floating_point, unsigned short>(false)) );
  VERIFY( (test_category<is_floating_point, int>(false)) );
  VERIFY( (test_category<is_floating_point, unsigned int>(false)) );
  VERIFY( (test_category<is_floating_point, long>(false)) );
  VERIFY( (test_category<is_floating_point, unsigned long>(false)) );
  VERIFY( (test_category<is_floating_point, long long>(false)) );
  VERIFY( (test_category<is_floating_point, unsigned long long>(false)) );

  VERIFY( (test_category<is_floating_point, float>(true)) );
  VERIFY( (test_category<is_floating_point, double>(true)) );
  VERIFY( (test_category<is_floating_point, long double>(true)) );

  // GNU Extensions.
#ifdef _GLIBCXX_USE_FLOAT128
  VERIFY( (test_category<is_floating_point, __float128>(true)) );
#endif

#ifdef _GLIBCXX_USE_INT128
  VERIFY( (test_category<is_floating_point, __int128>(false)) );
  VERIFY( (test_category<is_floating_point, unsigned __int128>(false)) );
#endif

  // Sanity check.
  VERIFY( (test_category<is_floating_point, ClassType>(false)) );
}

int main()
{
  test01();
  return 0;
}
