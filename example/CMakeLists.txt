#  Copyright Matus Chochlik.
#  Distributed under the Boost Software License, Version 1.0.
#  See accompanying file LICENSE_1_0.txt or copy at
#   http://www.boost.org/LICENSE_1_0.txt
#
cmake_minimum_required(VERSION 2.8)

add_custom_target(examples ALL)
set_property(TARGET examples PROPERTY FOLDER "Examples")

include(examples.cmake)

add_subdirectory(reflexpr)
add_subdirectory(mirror)
add_subdirectory(puddle)
add_subdirectory(dazzle)
add_subdirectory(lagoon)
add_subdirectory(refltool)
