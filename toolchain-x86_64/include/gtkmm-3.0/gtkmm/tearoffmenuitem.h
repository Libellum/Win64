// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!
#ifndef _GTKMM_TEAROFFMENUITEM_H
#define _GTKMM_TEAROFFMENUITEM_H


#ifndef GTKMM_DISABLE_DEPRECATED


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>


/*
 * Copyright (C) 1998-2002 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <gtkmm/menuitem.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkTearoffMenuItem = struct _GtkTearoffMenuItem;
using GtkTearoffMenuItemClass = struct _GtkTearoffMenuItemClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class TearoffMenuItem_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** A special Gtk::MenuItem which is used to tear off and reattach its menu.
 * When its menu is shown normally, the Gtk::TearoffMenuItem is drawn as a dotted line indicating that the menu can be torn off. Activating it causes its menu to be torn off and displayed in its own window.
 * When its menu is shown as a tearoff menu, the Gtk::TearoffMenuItem is drawn as a dotted line which has a left pointing arrow graphic indicating that the tearoff menu can be reattached. Activating it will erase the tearoff menu window.
 *
 * @deprecated Menus are not meant to be torn around. There is no replacement.
 *
 * @ingroup Widgets
 * @ingroup Menus
 */

class TearoffMenuItem : public MenuItem
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef TearoffMenuItem CppObjectType;
  typedef TearoffMenuItem_Class CppClassType;
  typedef GtkTearoffMenuItem BaseObjectType;
  typedef GtkTearoffMenuItemClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  TearoffMenuItem(TearoffMenuItem&& src) noexcept;
  TearoffMenuItem& operator=(TearoffMenuItem&& src) noexcept;

  // noncopyable
  TearoffMenuItem(const TearoffMenuItem&) = delete;
  TearoffMenuItem& operator=(const TearoffMenuItem&) = delete;

  ~TearoffMenuItem() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class TearoffMenuItem_Class;
  static CppClassType tearoffmenuitem_class_;

protected:
  explicit TearoffMenuItem(const Glib::ConstructParams& construct_params);
  explicit TearoffMenuItem(GtkTearoffMenuItem* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkTearoffMenuItem*       gobj()       { return reinterpret_cast<GtkTearoffMenuItem*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkTearoffMenuItem* gobj() const { return reinterpret_cast<GtkTearoffMenuItem*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

  
public:
  TearoffMenuItem();


};

} //namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::TearoffMenuItem
   */
  Gtk::TearoffMenuItem* wrap(GtkTearoffMenuItem* object, bool take_copy = false);
} //namespace Glib


#endif // GTKMM_DISABLE_DEPRECATED


#endif /* _GTKMM_TEAROFFMENUITEM_H */

