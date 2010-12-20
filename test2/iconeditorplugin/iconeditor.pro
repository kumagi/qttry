
TEMPLATE = lib
CONFIG += designer plugin release
HEADERS = ../iconeditor/iconeditor.hpp\
          iconeditor.hpp
SOURCES = ../iconeditor/iconeditor.cpp \
          iconeditorplugin.cpp
RESOURCES = iconeditorplugin.qrc
DESTDIR = $(QTDIR)/plugins/designer
