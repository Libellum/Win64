// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!
#ifndef _GDKMM_PIXBUFFORMAT_H
#define _GDKMM_PIXBUFFORMAT_H


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
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */


#include <gdkmmconfig.h>
#include <glibmm/value.h>
#include <vector>

#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C" { typedef struct _GdkPixbufFormat GdkPixbufFormat; }
#endif

namespace Gdk
{

class PixbufFormat
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = PixbufFormat;
  using BaseObjectType = GdkPixbufFormat;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type() G_GNUC_CONST;


  explicit PixbufFormat(GdkPixbufFormat* gobject, bool make_a_copy = true);

  PixbufFormat(const PixbufFormat& other);
  PixbufFormat& operator=(const PixbufFormat& other);

  PixbufFormat(PixbufFormat&& other) noexcept;
  PixbufFormat& operator=(PixbufFormat&& other) noexcept;

  ~PixbufFormat() noexcept;

  void swap(PixbufFormat& other) noexcept;

  ///Provides access to the underlying C instance.
  GdkPixbufFormat*       gobj()       { return gobject_; }

  ///Provides access to the underlying C instance.
  const GdkPixbufFormat* gobj() const { return gobject_; }

  ///Provides access to the underlying C instance. The caller is responsible for freeing it. Use when directly setting fields in structs.
  GdkPixbufFormat* gobj_copy() const;

protected:
  GdkPixbufFormat* gobject_;

private:

  
public:
  
  PixbufFormat();

  
  /** Returns the name of the format.
   * 
   * @newin{2,2}
   * 
   * @return The name of the format.
   */
  Glib::ustring get_name() const;
  
  /** Returns a description of the format.
   * 
   * @newin{2,2}
   * 
   * @return A description of the format.
   */
  Glib::ustring get_description() const;

 
  /** Returns the mime types supported by the format.
   * 
   * @newin{2,2}
   * 
   * @return A <tt>nullptr</tt>-terminated array of mime types which must be freed with 
   * Glib::strfreev() when it is no longer needed.
   */
  std::vector<Glib::ustring> get_mime_types() const;
  
  /** Returns the filename extensions typically used for files in the 
   * given format.
   * 
   * @newin{2,2}
   * 
   * @return A <tt>nullptr</tt>-terminated array of filename extensions which must be
   * freed with Glib::strfreev() when it is no longer needed.
   */
  std::vector<Glib::ustring> get_extensions() const;
  
  /** Returns <tt>true</tt> if the save option specified by @a option_key is supported when
   * saving a pixbuf using the module implementing @a format.
   * See save() for more information about option keys.
   * 
   * @newin{2,36}
   * 
   * @param option_key The name of an option.
   * @return <tt>true</tt> if the specified option is supported.
   */
  bool is_save_option_supported(const Glib::ustring& option_key) const;
  
  /** Returns whether pixbufs can be saved in the given format.
   * 
   * @newin{2,2}
   * 
   * @return Whether pixbufs can be saved in the given format.
   */
  bool is_writable() const;

  
  /** Returns whether this image format is scalable. If a file is in a 
   * scalable format, it is preferable to load it at the desired size, 
   * rather than loading it at the default size and scaling the 
   * resulting pixbuf to the desired size.
   * 
   * @newin{2,6}
   * 
   * @return Whether this image format is scalable.
   */
  bool is_scalable() const;
  
  /** Returns whether this image format is disabled. See
   * set_disabled().
   * 
   * @newin{2,6}
   * 
   * @return Whether this image format is disabled.
   */
  bool is_disabled() const;
  
  /** Disables or enables an image format. If a format is disabled, 
   * gdk-pixbuf won't use the image loader for this format to load 
   * images. Applications can use this to avoid using image loaders 
   * with an inappropriate license, see get_license().
   * 
   * @newin{2,6}
   * 
   * @param disabled <tt>true</tt> to disable the format @a format.
   */
  void set_disabled(bool disabled =  true);
  
  /** Returns information about the license of the image loader for the format. The
   * returned string should be a shorthand for a wellknown license, e.g. "LGPL",
   * "GPL", "QPL", "GPL/QPL", or "other" to indicate some other license.
   * 
   * @newin{2,6}
   * 
   * @return A string describing the license of @a format.
   */
  Glib::ustring get_license() const;


};

#ifndef DOXYGEN_SHOULD_SKIP_THIS
struct PixbufFormatTraits
{
  typedef PixbufFormat  CppType;
  typedef const GdkPixbufFormat*      CType;
  typedef GdkPixbufFormat*            CTypeNonConst;

  static CType   to_c_type      (const CppType& obj) { return obj.gobj();     }
  static CType   to_c_type      (CType          ptr) { return ptr;                   }
  static CppType to_cpp_type    (CType          ptr) { return PixbufFormat(const_cast<GdkPixbufFormat*>(ptr), true); }
  static void    release_c_type (CType          /* ptr */) { /* Doesn't happen */ }
};
#endif //DOXYGEN_SHOULD_SKIP_THIS

} // namespace Gdk


namespace Gdk
{

/** @relates Gdk::PixbufFormat
 * @param lhs The left-hand side
 * @param rhs The right-hand side
 */
inline void swap(PixbufFormat& lhs, PixbufFormat& rhs) noexcept
  { lhs.swap(rhs); }

} // namespace Gdk

namespace Glib
{

/** A Glib::wrap() method for this object.
 *
 * @param object The C instance.
 * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
 * @result A C++ instance that wraps this C instance.
 *
 * @relates Gdk::PixbufFormat
 */
Gdk::PixbufFormat wrap(GdkPixbufFormat* object, bool take_copy = false);

#ifndef DOXYGEN_SHOULD_SKIP_THIS
template <>
class Value<Gdk::PixbufFormat> : public Glib::Value_Boxed<Gdk::PixbufFormat>
{};
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

} // namespace Glib


#endif /* _GDKMM_PIXBUFFORMAT_H */

