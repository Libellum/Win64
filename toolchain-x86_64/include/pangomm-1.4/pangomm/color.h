// Generated by gmmproc 2.48.0 -- DO NOT MODIFY!
#ifndef _PANGOMM_COLOR_H
#define _PANGOMM_COLOR_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2002 The gtkmm Development Team
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
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <glibmm/value.h>
#include <glibmm/utility.h>
#include <pango/pango-attributes.h>


namespace Pango
{

/** A Pango::Color is used to represent a color in an uncalibrated RGB colorspace.
 */
class Color
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Color CppObjectType;
  typedef PangoColor BaseObjectType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  Color(const Color& other) noexcept;
  Color& operator=(const Color& other) noexcept;

  Color(Color&& other) noexcept;
  Color& operator=(Color&& other) noexcept;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type() G_GNUC_CONST;

  Color();

  explicit Color(const PangoColor* gobject); // always takes a copy

  ///Provides access to the underlying C instance.
  PangoColor*       gobj()       { return &gobject_; }

  ///Provides access to the underlying C instance.
  const PangoColor* gobj() const { return &gobject_; }

protected:
  PangoColor gobject_;

private:
  
  
public:

  #ifndef PANGOMM_DISABLE_DEPRECATED

  /// @deprecated Use the const version.
  operator bool();
  #endif // PANGOMM_DISABLE_DEPRECATED


  /// Tests whether the Color is valid.
  operator bool() const;
  
  /** Gets the red component of the color.
   * @return The red component of the color. This is a value between 0 and 65535, with 65535 indicating full intensity.
   */
  guint16 get_red() const;

  /** Gets the green component of the color.
   * @return The green component of the color. This is a value between 0 and 65535, with 65535 indicating full intensity.
   */
  guint16 get_green() const;

  /** Gets the blue component of the color.
   * @return The blue component of the color. This is a value between 0 and 65535, with 65535 indicating full intensity.
   */
  guint16 get_blue() const;

  /** Sets the red component of the color.
   * @param value The red component of the color. This is a value between 0 and 65535, with 65535 indicating full intensity.
   */
  void set_red(const guint16& value);

  /** Sets the green component of the color.
   * @param value The green component of the color. This is a value between 0 and 65535, with 65535 indicating full intensity.
   */
  void set_green(const guint16& value);

  /** Sets the blue component of the color.
   * @param value The blue component of the color. This is a value between 0 and 65535, with 65535 indicating full intensity.
   */
  void set_blue(const guint16& value);

  
  /** Fill in the fields of a color from a string specification. The
   * string can either one of a large set of standard names. (Taken
   * from the X11 &lt;filename&gt;rgb.txt&lt;/filename&gt; file), or it can be a hex value in the
   * form '#rgb' '#rrggbb' '#rrrgggbbb' or '#rrrrggggbbbb' where
   * 'r', 'g' and 'b' are hex digits of the red, green, and blue
   * components of the color, respectively. (White in the four
   * forms is '#fff' '#ffffff' '#fffffffff' and '#ffffffffffff')
   * 
   * @param spec A string specifying the new color.
   * @return <tt>true</tt> if parsing of the specifier succeeded,
   * otherwise false.
   */
  bool parse(const Glib::ustring& spec);

  
  /** Returns a textual specification of @a color in the hexadecimal form
   * <tt>#rrrrggggbbbb</tt>, where <tt>r</tt>,
   * <tt>g</tt> and <tt>b</tt> are hex digits representing
   * the red, green, and blue components respectively.
   * 
   * @newin{1,16}
   * 
   * @return A newly-allocated text string that must be freed with Glib::free().
   */
  Glib::ustring to_string() const;


};

} /* namespace Pango */


namespace Glib
{

/** @relates Pango::Color
 * @param object The C instance
 * @result A C++ instance that wraps this C instance.
 */
Pango::Color& wrap(PangoColor* object);

/** @relates Pango::Color
 * @param object The C instance
 * @result A C++ instance that wraps this C instance.
 */
const Pango::Color& wrap(const PangoColor* object);

#ifndef DOXYGEN_SHOULD_SKIP_THIS
template <>
class Value<Pango::Color> : public Glib::Value_Boxed<Pango::Color>
{};
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

} // namespace Glib


#endif /* _PANGOMM_COLOR_H */

