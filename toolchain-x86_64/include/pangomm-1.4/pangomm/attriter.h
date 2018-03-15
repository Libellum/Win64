// Generated by gmmproc 2.48.0 -- DO NOT MODIFY!
#ifndef _PANGOMM_ATTRITER_H
#define _PANGOMM_ATTRITER_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* attriter.h
 *
 * Copyright (C) 1998-1999 The gtkmm Development Team
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

#include <glibmm/slisthandle.h>
#include <pangomm/attributes.h>


namespace Pango
{

/** A Pango::AttrIter is used to represent an iterator through a Pango::AttrList.
 * A new iterator is created with Pango::AttrList::get_iter(). Once the iterator is created,
 * it can be advanced through the style changes in the text using Pango::AttrIter::next().
 * At each style change, the range of the current style segment and the attributes currently in effect can be queried.
 */
class AttrIter
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef AttrIter CppObjectType;
  typedef PangoAttrIterator BaseObjectType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

private:

  
public:
  typedef std::forward_iterator_tag iterator_category;
  typedef int                       difference_type;

protected:
  AttrIter();

public:
  explicit AttrIter(PangoAttrIterator* castitem, bool take_copy=true);
  AttrIter(const AttrIter& src);

  ~AttrIter();

  AttrIter& operator=(const AttrIter& src);

  /** Advance the iterator until the next change of style.
   * The iterator becomes invalid if the end of the list is reached.
   * @return The iterator itself.
   */
  AttrIter&      operator++();

  const AttrIter operator++(int);

  /** Check whether the iterator is valid.
   * @return <tt>true</tt> if the iterator is valid.
   */
  operator bool() const;

  /** The same as operator++().
   * @return <tt>false</tt> if the end of the list is reached.
   */
  bool next();

  
  /** Get the range of the current segment. Note that the
   * stored return values are signed, not unsigned like
   * the values in Pango::Attribute. To deal with this API
   * oversight, stored return values that wouldn't fit into
   * a signed integer are clamped to MAXINT.
   * 
   * @param start Location to store the start of the range.
   * @param end Location to store the end of the range.
   */
  void get_range(int& start, int& end) const;
  
  /** Find the current attribute of a particular type at the iterator
   * location. When multiple attributes of the same type overlap,
   * the attribute whose range starts closest to the current location
   * is used.
   * 
   * @param type The type of attribute to find.
   * @return The current attribute of the given type,
   * or <tt>nullptr</tt> if no attribute of that type applies to the
   * current location.
   */
  Attribute get_attribute(AttrType type) const;

  /** Get the font description used at the current iterator position.
   * @return The font description used at the current iterator position.
   */
  FontDescription get_font_desc() const;

  /** Gets the language tag used at current iterator position.
   * @return The language tag or an empty Pango::Language object if non is found.
   */
  Language get_language() const;

  /** Gets a list of non-font attributes at the the current iterator position.
   * Only the highest priority value of each attribute will be added to this list.
   * @return The list of non-font attributes at the current iterator position.
   */
  SListHandle_Attribute get_extra_attrs() const;

  /** Gets a list all attributes a the current position of the
   * iterator.
   *
   * @result A list of all attributes for the current range.
   */
  SListHandle_Attribute get_attrs() const;
  

  PangoAttrIterator*       gobj()       { return gobject_; }
  const PangoAttrIterator* gobj() const { return gobject_; }

protected:
  PangoAttrIterator* gobject_;


};

} // namespace Pango


namespace Glib
{

/** @relates Pango::AttrIter */
Pango::AttrIter wrap(PangoAttrIterator* object, bool take_copy=false);

} // namespace Glib


#endif /* _PANGOMM_ATTRITER_H */

