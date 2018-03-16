set(TOOLCHAIN_DIR ${CMAKE_SOURCE_DIR}/vendor/Libellum/Win64/toolchain-x86_64)
set(OPENSSL_ROOT_DIR ${TOOLCHAIN_DIR})

link_directories( ${TOOLCHAIN_DIR}/lib )
link_directories( ${TOOLCHAIN_DIR}/lib )

include_directories( ${TOOLCHAIN_DIR}/include )
include_directories( ${TOOLCHAIN_DIR}/include/pango-1.0 )
include_directories( ${TOOLCHAIN_DIR}/include/gdk-pixbuf-2.0 )

include_directories( ${TOOLCHAIN_DIR}/include/freetype2 )
include_directories( ${TOOLCHAIN_DIR}/lib/freetype2/include )

include_directories( ${TOOLCHAIN_DIR}/include/atk-1.0 )
include_directories( ${TOOLCHAIN_DIR}/include/atkmm-1.6 )
include_directories( ${TOOLCHAIN_DIR}/include/gtk-3.0 )

include_directories( ${TOOLCHAIN_DIR}/include/gdkmm-3.0/ )
include_directories( ${TOOLCHAIN_DIR}/lib/gdkmm-3.0/include/ )

include_directories( ${TOOLCHAIN_DIR}/include/gtkmm-3.0/ )
include_directories( ${TOOLCHAIN_DIR}/lib/gtkmm-3.0/include )

include_directories( ${TOOLCHAIN_DIR}/include/glibmm-2.4/ )
include_directories( ${TOOLCHAIN_DIR}/lib/glibmm-2.4/include/ )

include_directories( ${TOOLCHAIN_DIR}/include/glib-2.0/ )
include_directories( ${TOOLCHAIN_DIR}/lib/glib-2.0/include/ )

include_directories( ${TOOLCHAIN_DIR}/include/sigc++-2.0/ )
include_directories( ${TOOLCHAIN_DIR}/lib/sigc++-2.0/include/ )

include_directories( ${TOOLCHAIN_DIR}/include/giomm-2.4/ )
include_directories( ${TOOLCHAIN_DIR}/lib/giomm-2.4/include )

include_directories( ${TOOLCHAIN_DIR}/include/pangomm-1.4 )
include_directories( ${TOOLCHAIN_DIR}/lib/pangomm-1.4/include )

include_directories( ${TOOLCHAIN_DIR}/include/cairo )

include_directories( ${TOOLCHAIN_DIR}/include/cairomm-1.0 )
include_directories( ${TOOLCHAIN_DIR}/lib/cairomm-1.0/include )

set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_MULTITHREADED ON)
set(BOOST_ROOT ${TOOLCHAIN_DIR})

find_package(Boost 1.64.0 REQUIRED COMPONENTS system filesystem)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM REQUIRED gtkmm-3.0)
