
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicTreeUI$CellEditorHandler__
#define __javax_swing_plaf_basic_BasicTreeUI$CellEditorHandler__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace event
      {
          class ChangeEvent;
      }
      namespace plaf
      {
        namespace basic
        {
            class BasicTreeUI;
            class BasicTreeUI$CellEditorHandler;
        }
      }
    }
  }
}

class javax::swing::plaf::basic::BasicTreeUI$CellEditorHandler : public ::java::lang::Object
{

public:
  BasicTreeUI$CellEditorHandler(::javax::swing::plaf::basic::BasicTreeUI *);
  virtual void editingStopped(::javax::swing::event::ChangeEvent *);
  virtual void editingCanceled(::javax::swing::event::ChangeEvent *);
public: // actually package-private
  ::javax::swing::plaf::basic::BasicTreeUI * __attribute__((aligned(__alignof__( ::java::lang::Object)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_basic_BasicTreeUI$CellEditorHandler__
