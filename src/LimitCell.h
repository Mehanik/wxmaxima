///
///  Copyright (C) 2004-2007 Andrej Vodopivec <andrejv@users.sourceforge.net>
///
///  This program is free software; you can redistribute it and/or modify
///  it under the terms of the GNU General Public License as published by
///  the Free Software Foundation; either version 2 of the License, or
///  (at your option) any later version.
///
///  This program is distributed in the hope that it will be useful,
///  but WITHOUT ANY WARRANTY; without even the implied warranty of
///  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
///  GNU General Public License for more details.
///
///
///  You should have received a copy of the GNU General Public License
///  along with this program; if not, write to the Free Software
///  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
///

#ifndef _LIMITCELL_H_
#define _LIMITCELL_H_

#include "MathCell.h"

class LimitCell : public MathCell
{
public:
  LimitCell();
  ~LimitCell();
  void Destroy();
  MathCell* Copy(bool all);
  void RecalculateSize(CellParser& parser, int fontsize, bool all);
  void RecalculateWidths(CellParser& parser, int fontsize, bool all);
  void Draw(CellParser& parser, wxPoint point, int fontsize, bool all);
  void SetBase(MathCell* base);
  void SetUnder(MathCell* under);
  void SetName(MathCell* name);
  wxString ToString(bool all);
  wxString ToTeX(bool all);
	wxString ToXml(bool all);	//new!!
  void SelectInner(wxRect& rect, MathCell** first, MathCell** last);
  void SetParent(MathCell *parent, bool all);
protected:
  MathCell *m_base;
  MathCell *m_under;
  MathCell *m_name;
};

#endif //_UNDERCELL_H_
