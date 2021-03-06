
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicButtonUI__
#define __javax_swing_plaf_basic_BasicButtonUI__

#pragma interface

#include <javax/swing/plaf/ButtonUI.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Dimension;
        class Graphics;
        class Insets;
        class Rectangle;
    }
  }
  namespace javax
  {
    namespace swing
    {
        class AbstractButton;
        class Icon;
        class JComponent;
      namespace plaf
      {
          class ComponentUI;
        namespace basic
        {
            class BasicButtonListener;
            class BasicButtonUI;
        }
      }
    }
  }
}

class javax::swing::plaf::basic::BasicButtonUI : public ::javax::swing::plaf::ButtonUI
{

public:
  BasicButtonUI();
  static ::javax::swing::plaf::ComponentUI * createUI(::javax::swing::JComponent *);
  virtual jint getDefaultTextIconGap(::javax::swing::AbstractButton *);
public: // actually protected
  virtual void clearTextShiftOffset();
  virtual jint getTextShiftOffset();
  virtual void setTextShiftOffset();
  virtual ::java::lang::String * getPropertyPrefix();
  virtual void installDefaults(::javax::swing::AbstractButton *);
  virtual void uninstallDefaults(::javax::swing::AbstractButton *);
  virtual ::javax::swing::plaf::basic::BasicButtonListener * createButtonListener(::javax::swing::AbstractButton *);
  virtual void installListeners(::javax::swing::AbstractButton *);
  virtual void uninstallListeners(::javax::swing::AbstractButton *);
  virtual void installKeyboardActions(::javax::swing::AbstractButton *);
  virtual void uninstallKeyboardActions(::javax::swing::AbstractButton *);
public:
  virtual void installUI(::javax::swing::JComponent *);
  virtual void uninstallUI(::javax::swing::JComponent *);
  virtual ::java::awt::Dimension * getMinimumSize(::javax::swing::JComponent *);
  virtual ::java::awt::Dimension * getMaximumSize(::javax::swing::JComponent *);
  virtual ::java::awt::Dimension * getPreferredSize(::javax::swing::JComponent *);
public: // actually package-private
  static ::javax::swing::Icon * currentIcon(::javax::swing::AbstractButton *);
public:
  virtual void paint(::java::awt::Graphics *, ::javax::swing::JComponent *);
public: // actually protected
  virtual void paintFocus(::java::awt::Graphics *, ::javax::swing::AbstractButton *, ::java::awt::Rectangle *, ::java::awt::Rectangle *, ::java::awt::Rectangle *);
  virtual void paintIcon(::java::awt::Graphics *, ::javax::swing::JComponent *, ::java::awt::Rectangle *);
  virtual void paintButtonPressed(::java::awt::Graphics *, ::javax::swing::AbstractButton *);
  virtual void paintText(::java::awt::Graphics *, ::javax::swing::JComponent *, ::java::awt::Rectangle *, ::java::lang::String *);
  virtual void paintText(::java::awt::Graphics *, ::javax::swing::AbstractButton *, ::java::awt::Rectangle *, ::java::lang::String *);
private:
  ::javax::swing::plaf::basic::BasicButtonListener * getButtonListener(::javax::swing::AbstractButton *);
public: // actually package-private
  static ::java::awt::Rectangle * viewR;
  static ::java::awt::Rectangle * iconR;
  static ::java::awt::Rectangle * textR;
  static ::java::awt::Insets * cachedInsets;
private:
  static ::javax::swing::plaf::basic::BasicButtonUI * sharedUI;
  static ::javax::swing::plaf::basic::BasicButtonListener * sharedListener;
public: // actually protected
  jint __attribute__((aligned(__alignof__( ::javax::swing::plaf::ButtonUI)))) defaultTextIconGap;
  jint defaultTextShiftOffset;
private:
  jint textShiftOffset;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_basic_BasicButtonUI__
