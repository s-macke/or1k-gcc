
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_nio_charset_UnicodeLittle__
#define __gnu_java_nio_charset_UnicodeLittle__

#pragma interface

#include <java/nio/charset/Charset.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace nio
      {
        namespace charset
        {
            class UnicodeLittle;
        }
      }
    }
  }
  namespace java
  {
    namespace nio
    {
      namespace charset
      {
          class Charset;
          class CharsetDecoder;
          class CharsetEncoder;
      }
    }
  }
}

class gnu::java::nio::charset::UnicodeLittle : public ::java::nio::charset::Charset
{

public: // actually package-private
  UnicodeLittle();
public:
  jboolean contains(::java::nio::charset::Charset *);
  ::java::nio::charset::CharsetDecoder * newDecoder();
  ::java::nio::charset::CharsetEncoder * newEncoder();
  static ::java::lang::Class class$;
};

#endif // __gnu_java_nio_charset_UnicodeLittle__
