cmake_minimum_required(VERSION 2.8.12)

project(EnterBoxPlugin)

message ("CMAKE_SOURCE_DIR = ${CMAKE_SOURCE_DIR}")

set(INSTALL_PREFIX_FOR_WINDOWS "${CMAKE_SOURCE_DIR}/../usr")
set(INSTALL_PREFIX_FOR_LINUX   "/home/namatv/usr")

add_definitions(-DENTERBOX_LIBRARY)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5Core)
find_package(Qt5Gui)
find_package(Qt5Xml)
find_package(Qt5Widgets)
find_package(Qt5Designer)

#if(NOT WIN32)
  string(ASCII 27 Esc)
  set(ColourReset "${Esc}[m")
  set(ColourBold  "${Esc}[1m")
  set(Red         "${Esc}[31m")
  set(Green       "${Esc}[32m")
  set(Yellow      "${Esc}[33m")
  set(Blue        "${Esc}[34m")
  set(Magenta     "${Esc}[35m")
  set(Cyan        "${Esc}[36m")
  set(White       "${Esc}[37m")
  set(BoldRed     "${Esc}[1;31m")
  set(BoldGreen   "${Esc}[1;32m")
  set(BoldYellow  "${Esc}[1;33m")
  set(BoldBlue    "${Esc}[1;34m")
  set(BoldMagenta "${Esc}[1;35m")
  set(BoldCyan    "${Esc}[1;36m")
  set(BoldWhite   "${Esc}[1;37m")
#endif()

if (${CMAKE_SYSTEM_NAME} MATCHES "Windows")
  set(CMAKE_INSTALL_PREFIX ${INSTALL_PREFIX_FOR_WINDOWS})
  message ("CMAKE_SYSTEM_NAME = ${CMAKE_SYSTEM_NAME}")
  message ("CMAKE_INSTALL_PREFIX =  ${CMAKE_INSTALL_PREFIX}")
endif (${CMAKE_SYSTEM_NAME} MATCHES "Windows")

if (${CMAKE_SYSTEM_NAME} MATCHES "Linux")
  set(CMAKE_INSTALL_PREFIX ${INSTALL_PREFIX_FOR_LINUX})
  message ("${BoldRed}CMAKE_SYSTEM_NAME = ${CMAKE_SYSTEM_NAME}${ColourReset}")
  message ("${BoldGreen}CMAKE_INSTALL_PREFIX =  ${CMAKE_INSTALL_PREFIX}${ColourReset}")
endif (${CMAKE_SYSTEM_NAME} MATCHES "Linux")

message ("Qt5Core_INCLUDE_DIRS     = ${Qt5Core_INCLUDE_DIRS}")
message ("Qt5Gui_INCLUDE_DIRS      = ${Qt5Gui_INCLUDE_DIRS}")
message ("Qt5Widgets_INCLUDE_DIRS  = ${Qt5Widgets_INCLUDE_DIRS}")
message ("Qt5Xml_INCLUDE_DIRS      = ${Qt5Xml_INCLUDE_DIRS}")
message ("Qt5Designer_INCLUDE_DIRS = ${Qt5Designer_INCLUDE_DIRS}")

include_directories(
  ${Qt5Designer_INCLUDE_DIRS}
  src
#
  ${CMAKE_INSTALL_PREFIX}/include/mnas
  ${CMAKE_INSTALL_PREFIX}/include/mnas/ns_MNAS_Error
  ${CMAKE_INSTALL_PREFIX}/include/mnas/ns_MNAS_CodePage
  ${CMAKE_INSTALL_PREFIX}/include/mnas/ns_MNAS_Error
  ${CMAKE_INSTALL_PREFIX}/include/mnas/ns_MNAS_Gases
  ${CMAKE_INSTALL_PREFIX}/include/mnas/ns_MNAS_HalfDiv
  ${CMAKE_INSTALL_PREFIX}/include/mnas/ns_MNAS_Matrix
  ${CMAKE_INSTALL_PREFIX}/include/mnas/ns_MNAS_MendeleevTbl
  ${CMAKE_INSTALL_PREFIX}/include/mnas/ns_MNAS_ValDimension
)

set(EnterBoxPlugin_SRCS src/EnterBox.cpp src/EnterBoxPlugin.cpp)

set(EnterBoxPlugin_HEADERS src/EnterBox.h src/EnterBoxPlugin.h src/enterbox_lib_global.h)

set(EnterBoxPlugin_UIS src/EnterBox.ui)
set(EnterBoxPlugin_UIS_H build/ui_EnterBox.h)

add_library (EnterBoxPlugin SHARED ${EnterBoxPlugin_SRCS})

find_library(mnas_lib mnas ${CMAKE_INSTALL_PREFIX}/lib ${CMAKE_INSTALL_PREFIX}/bin)

target_link_libraries(EnterBoxPlugin Qt5::Core Qt5::Gui Qt5::Widgets Qt5::Designer Qt5::Xml ${mnas_lib})

install(
  TARGETS EnterBoxPlugin
  RUNTIME DESTINATION bin
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib/static)

message("EnterBoxPlugin_HEADERS = ${EnterBoxPlugin_HEADERS}")
message("EnterBoxPlugin_UIS_H = ${EnterBoxPlugin_UIS_H}")
message("EnterBoxPlugin_UIS = ${EnterBoxPlugin_UIS}")

install (FILES
  ${EnterBoxPlugin_HEADERS}
  ${EnterBoxPlugin_UIS}
  ${EnterBoxPlugin_UIS_H}
  DESTINATION include/EnterBoxPlugin)
