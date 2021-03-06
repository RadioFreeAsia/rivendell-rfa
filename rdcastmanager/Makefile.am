## automake.am
##
## Automake.am for rivendell/rdcastmanager
##
## (C) Copyright 2002-2006 Fred Gleason <fredg@paravelsystems.com>
##
##      $Id: Makefile.am,v 1.4 2008/04/01 18:27:29 fredg Exp $
##
##   This program is free software; you can redistribute it and/or modify
##   it under the terms of the GNU General Public License version 2 as
##   published by the Free Software Foundation.
##
##   This program is distributed in the hope that it will be useful,
##   but WITHOUT ANY WARRANTY; without even the implied warranty of
##   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
##   GNU General Public License for more details.
##
##   You should have received a copy of the GNU General Public
##   License along with this program; if not, write to the Free Software
##   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
##
##
## Use automake to process this into a Makefile.in

AM_CPPFLAGS = -Wall -DPREFIX=\"$(prefix)\" -DQTDIR=\"@QT_DIR@\" @QT_CXXFLAGS@ -I$(top_srcdir)/lib
LIBS = @QT_LIBS@ -L$(top_srcdir)/lib
MOC = @QT_MOC@

# The dependency for qt's Meta Object Compiler (moc)
moc_%.cpp:	%.h
	$(MOC) $< -o $@

# I18N Stuff
install-exec-local:	
	mkdir -p $(DESTDIR)$(prefix)/share/rivendell
	cp rdcastmanager_*.qm $(DESTDIR)$(prefix)/share/rivendell

uninstall-local:
	rm -f $(DESTDIR)$(prefix)/share/srlabs/rdcastmanager_*.qm

all:	
	@QT_BIN@/lupdate rdcastmanager.pro
	@QT_BIN@/lrelease rdcastmanager.pro

bin_PROGRAMS = rdcastmanager

dist_rdcastmanager_SOURCES = rdcastmanager.cpp rdcastmanager.h\
                             list_casts.cpp list_casts.h\
                             edit_cast.cpp edit_cast.h\
                             pick_report_dates.cpp pick_report_dates.h\
                             globals.h

nodist_rdcastmanager_SOURCES = moc_rdcastmanager.cpp moc_list_casts.cpp\
                               moc_edit_cast.cpp moc_pick_report_dates.cpp

rdcastmanager_LDADD = -lqui -lrd -lid3 -lFLAC @LIBVORBIS@

# rdcastmanager_LDFLAGS = -static

EXTRA_DIST = rdcastmanager.pro\
             rdcastmanager_es.ts rdcastmanager_fr.ts rdcastmanager_de.ts

CLEANFILES = *~ moc_* *.qm *.obj *.idb *.pdb *ilk
MAINTAINERCLEANFILES = *~ Makefile.in configure aclocal.m4 *.tar.gz moc_*
