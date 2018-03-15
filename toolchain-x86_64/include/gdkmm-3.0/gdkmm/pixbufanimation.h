// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!
#ifndef _GDKMM_PIXBUFANIMATION_H
#define _GDKMM_PIXBUFANIMATION_H


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

#include <glibmm/object.h>
#include <gdkmm/pixbuf.h>
#include <gdkmm/pixbufanimationiter.h>
#include <gdk-pixbuf/gdk-pixbuf.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GdkPixbufAnimation = struct _GdkPixbufAnimation;
using GdkPixbufAnimationClass = struct _GdkPixbufAnimationClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gdk
{ class PixbufAnimation_Class; } // namespace Gdk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gdk
{

/** The gdk-pixbuf library provides a simple mechanism to load and represent animations.
 * An animation is conceptually a series of frames to be displayed over time.
 * Each frame is the same size. The animation may not be represented as a series of frames internally;
 * for example, it may be stored as a sprite and instructions for moving the sprite around a background.
 * To display an animation you don't need to understand its representation, however; you just ask
 * gdk-pixbuf what should be displayed at a given point in time.
 */

class PixbufAnimation : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = PixbufAnimation;
  using CppClassType = PixbufAnimation_Class;
  using BaseObjectType = GdkPixbufAnimation;
  using BaseClassType = GdkPixbufAnimationClass;

  // noncopyable
  PixbufAnimation(const PixbufAnimation&) = delete;
  PixbufAnimation& operator=(const PixbufAnimation&) = delete;

private:  friend class PixbufAnimation_Class;
  static CppClassType pixbufanimation_class_;

protected:
  explicit PixbufAnimation(const Glib::ConstructParams& construct_params);
  explicit PixbufAnimation(GdkPixbufAnimation* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  PixbufAnimation(PixbufAnimation&& src) noexcept;
  PixbufAnimation& operator=(PixbufAnimation&& src) noexcept;

  ~PixbufAnimation() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GdkPixbufAnimation*       gobj()       { return reinterpret_cast<GdkPixbufAnimation*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GdkPixbufAnimation* gobj() const { return reinterpret_cast<GdkPixbufAnimation*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GdkPixbufAnimation* gobj_copy();

private:

  
protected:

public:

  static Glib::RefPtr<PixbufAnimation> create_from_file(const Glib::ustring& filename);

  
  /** Queries the width of the bounding box of a pixbuf animation.
   * 
   * @return Width of the bounding box of the animation.
   */
  int get_width() const;
  
  /** Queries the height of the bounding box of a pixbuf animation.
   * 
   * @return Height of the bounding box of the animation.
   */
  int get_height() const;
  
  /** If you load a file with new_from_file() and it
   * turns out to be a plain, unanimated image, then this function will
   * return <tt>true</tt>. Use get_static_image() to retrieve
   * the image.
   * 
   * @return <tt>true</tt> if the "animation" was really just an image.
   */
  bool is_static_image() const;
  
  /** If an animation is really just a plain image (has only one frame),
   * this function returns that image. If the animation is an animation,
   * this function returns a reasonable thing to display as a static
   * unanimated image, which might be the first frame, or something more
   * sophisticated. If an animation hasn't loaded any frames yet, this
   * function will return <tt>nullptr</tt>.
   * 
   * @return Unanimated image representing the animation.
   */
  Glib::RefPtr<Pixbuf> get_static_image();
  
  /** Get an iterator for displaying an animation. The iterator provides
   * the frames that should be displayed at a given time. It should be
   * freed after use with Glib::object_unref().
   * 
   *  @a start_time would normally come from Glib::get_current_time(), and marks
   * the beginning of animation playback. After creating an iterator, you
   * should immediately display the pixbuf returned by
   * Gdk::PixbufAnimationIter::get_pixbuf(). Then, you should install
   * a timeout (with Glib::timeout_add()) or by some other mechanism ensure
   * that you'll update the image after
   * Gdk::PixbufAnimationIter::get_delay_time() milliseconds. Each time
   * the image is updated, you should reinstall the timeout with the new,
   * possibly-changed delay time.
   * 
   * As a shortcut, if @a start_time is <tt>nullptr</tt>, the result of
   * Glib::get_current_time() will be used automatically.
   * 
   * To update the image (i.e. possibly change the result of
   * Gdk::PixbufAnimationIter::get_pixbuf() to a new frame of the animation),
   * call Gdk::PixbufAnimationIter::advance().
   * 
   * If you're using Gdk::PixbufLoader, in addition to updating the image
   * after the delay time, you should also update it whenever you
   * receive the area_updated signal and
   * Gdk::PixbufAnimationIter::on_currently_loading_frame() returns
   * <tt>true</tt>. In this case, the frame currently being fed into the loader
   * has received new data, so needs to be refreshed. The delay time for
   * a frame may also be modified after an area_updated signal, for
   * example if the delay time for a frame is encoded in the data after
   * the frame itself. So your timeout should be reinstalled after any
   * area_updated signal.
   * 
   * A delay time of -1 is possible, indicating "infinite."
   * 
   * @param start_time Time when the animation starts playing.
   * @return An iterator to move over the animation.
   */
  Glib::RefPtr<PixbufAnimationIter> get_iter(const GTimeVal* start_time);


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gdk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gdk::PixbufAnimation
   */
  Glib::RefPtr<Gdk::PixbufAnimation> wrap(GdkPixbufAnimation* object, bool take_copy = false);
}


#endif /* _GDKMM_PIXBUFANIMATION_H */

