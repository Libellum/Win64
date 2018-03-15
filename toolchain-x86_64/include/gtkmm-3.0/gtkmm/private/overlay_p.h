// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!
#ifndef _GTKMM_OVERLAY_P_H
#define _GTKMM_OVERLAY_P_H


#include <gtkmm/private/bin_p.h>

#include <glibmm/class.h>

namespace Gtk
{

class Overlay_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = Overlay;
  using BaseObjectType = GtkOverlay;
  using BaseClassType = GtkOverlayClass;
  using CppClassParent = Gtk::Bin_Class;
  using BaseClassParent = GtkBinClass;

  friend class Overlay;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static gboolean get_child_position_callback(GtkOverlay* self, GtkWidget* p0, GdkRectangle* p1);

  //Callbacks (virtual functions):
};


} // namespace Gtk


#endif /* _GTKMM_OVERLAY_P_H */

