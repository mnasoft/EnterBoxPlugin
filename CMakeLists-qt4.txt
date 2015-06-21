cmake_minimum_required(VERSION 2.6)

project(EnterBoxPlugin)
# set(CMAKE_INSTALL_PREFIX /home/namatv)
execute_process(COMMAND uname -m OUTPUT_VARIABLE arch)

find_package(Qt4 COMPONENTS QtCore QtGui QtXml QtDesigner REQUIRED )

include(${QT_USE_FILE})

include_directories(
  ${QT_INCLUDES} 
  ${CMAKE_CURRENT_BINARY_DIR} 
  src
#   
  /usr/local/include/MNAS_lib/
#
  ../ns_MNAS_lib/ns_MNAS_CodePage  
  ../ns_MNAS_lib/ns_MNAS_Error
  ../ns_MNAS_lib/ns_MNAS_Gases 
  ../ns_MNAS_lib/ns_MNAS_HalfDiv
  ../ns_MNAS_lib/ns_MNAS_Matrix
  ../ns_MNAS_lib/ns_MNAS_MendeleevTbl
  ../ns_MNAS_lib/ns_MNAS_ValDimension
)

set(EnterBoxPlugin_SRCS
  ./src/EnterBox.cpp
  ./src/EnterBoxPlugin.cpp
)

#  build/ui_EnterBox.h
set(EnterBoxPlugin_HEADERS 
  src/EnterBox.h
  src/EnterBoxPlugin.h
)

set(EnterBoxPlugin_UIS ./forms/EnterBox.ui)

QT4_WRAP_UI(EnterBoxPlugin_UIS_H ${EnterBoxPlugin_UIS})

qt4_automoc(${EnterBoxPlugin_SRCS})

add_library (EnterBoxPlugin SHARED ${EnterBoxPlugin_SRCS} ${EnterBoxPlugin_UIS_H})

find_library(ns_MNAS_lib ns_MNAS_lib /usr/local/lib64 ../ns_MNAS_lib/build )

target_link_libraries(EnterBoxPlugin 
  ${QT_QTCORE_LIBRARY} 
  ${QT_QTGUI_LIBRARY} 
  ${QT_QTDESIGNER_LIBRARY} 
  ${QT_QTSCRIPTTOOLS_LIBRARY}
  ${QT_QTXML_LIBRARY}
  ${ns_MNAS_lib}
)

if (${arch} MATCHES "x86_64")
  message ("EnterBoxPlugin ${arch}")
  install(
    TARGETS EnterBoxPlugin
    RUNTIME DESTINATION bin
    LIBRARY DESTINATION lib64
    ARCHIVE DESTINATION lib64/static
  )
else(True)
  message ("EnterBoxPlugin ${arch}")
  install(
    TARGETS EnterBoxPlugin
    RUNTIME DESTINATION bin
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib/static
  )
endif (${arch} MATCHES "x86_64")

install (FILES 
  ${EnterBoxPlugin_HEADERS}
  ${EnterBoxPlugin_UIS}
  ${EnterBoxPlugin_UIS_H}
  DESTINATION include/EnterBoxPlugin)
