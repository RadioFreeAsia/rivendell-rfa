// rdmarkeredit.h
//
//   An flashing button widget.
//
//   (C) Copyright 2002 Fred Gleason <fredg@paravelsystems.com>
//
//      $Id: rdmarker_edit.h,v 1.5 2007/09/14 14:06:24 fredg Exp $
//
//   This program is free software; you can redistribute it and/or modify
//   it under the terms of the GNU General Public License version 2 as
//   published by the Free Software Foundation.
//
//   This program is distributed in the hope that it will be useful,
//   but WITHOUT ANY WARRANTY; without even the implied warranty of
//   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//   GNU General Public License for more details.
//
//   You should have received a copy of the GNU General Public
//   License along with this program; if not, write to the Free Software
//   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
//
//

#ifndef RDMARKEREDIT_H
#define RDMARKEREDIT_H

#include <qwidget.h>
#include <qlineedit.h>
#include <qpixmap.h>
#include <qcolor.h>


class RDMarkerEdit : public QLineEdit
{
  Q_OBJECT

 public:
  RDMarkerEdit(QWidget *parent,const char *name);
  RDMarkerEdit(const QString &contents,QWidget *parent,const char *name);

 signals:
  void escapePressed();

 protected:
  void keyPressEvent(QKeyEvent *e);
};


#endif  // RDMARKEREDIT_H
