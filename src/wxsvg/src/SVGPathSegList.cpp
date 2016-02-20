//////////////////////////////////////////////////////////////////////////////
// Name:        SVGPathSegList.cpp
// Author:      Alex Thuering
// Created:     2005/09/27
// RCS-ID:      $Id: SVGPathSegList.cpp,v 1.11 2013/03/17 15:10:14 ntalex Exp $
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by genList.py
//////////////////////////////////////////////////////////////////////////////

#include "SVGPathSegList.h"
#include "SVGPathSegClosePath.h"
#include "SVGPathSegMovetoAbs.h"
#include "SVGPathSegMovetoRel.h"
#include "SVGPathSegLinetoAbs.h"
#include "SVGPathSegLinetoRel.h"
#include "SVGPathSegCurvetoCubicAbs.h"
#include "SVGPathSegCurvetoCubicRel.h"
#include "SVGPathSegCurvetoQuadraticAbs.h"
#include "SVGPathSegCurvetoQuadraticRel.h"
#include "SVGPathSegArcAbs.h"
#include "SVGPathSegArcRel.h"
#include "SVGPathSegLinetoHorizontalAbs.h"
#include "SVGPathSegLinetoHorizontalRel.h"
#include "SVGPathSegLinetoVerticalAbs.h"
#include "SVGPathSegLinetoVerticalRel.h"
#include "SVGPathSegCurvetoCubicSmoothAbs.h"
#include "SVGPathSegCurvetoCubicSmoothRel.h"
#include "SVGPathSegCurvetoQuadraticSmoothAbs.h"
#include "SVGPathSegCurvetoQuadraticSmoothRel.h"

#include "SVGNumberList.h"
#include <wx/log.h>

#include <wx/arrimpl.cpp>
WX_DEFINE_OBJARRAY(wxSVGPathSegListBase);

void wxSVGPathSegList::DoCopy(const wxSVGPathSegList& src)
{
  for (int i=0; i<(int)src.Count(); i++)
  {
    switch (src[i].GetPathSegType())
	{
	  case wxPATHSEG_MOVETO_ABS:
        Add(new wxSVGPathSegMovetoAbs((const wxSVGPathSegMovetoAbs&)src[i]));
        break;
	  case wxPATHSEG_MOVETO_REL:
        Add(new wxSVGPathSegMovetoRel((const wxSVGPathSegMovetoRel&)src[i]));
        break;
	  case wxPATHSEG_LINETO_ABS:
        Add(new wxSVGPathSegLinetoAbs((const wxSVGPathSegLinetoAbs&)src[i]));
        break;
	  case wxPATHSEG_LINETO_REL:
        Add(new wxSVGPathSegLinetoRel((const wxSVGPathSegLinetoRel&)src[i]));
        break;
	  case wxPATHSEG_LINETO_HORIZONTAL_ABS:
        Add(new wxSVGPathSegLinetoHorizontalAbs((const wxSVGPathSegLinetoHorizontalAbs&)src[i]));
        break;
	  case wxPATHSEG_LINETO_HORIZONTAL_REL:
        Add(new wxSVGPathSegLinetoHorizontalRel((const wxSVGPathSegLinetoHorizontalRel&)src[i]));
        break;
	  case wxPATHSEG_LINETO_VERTICAL_ABS:
        Add(new wxSVGPathSegLinetoVerticalAbs((const wxSVGPathSegLinetoVerticalAbs&)src[i]));
        break;
	  case wxPATHSEG_LINETO_VERTICAL_REL:
        Add(new wxSVGPathSegLinetoVerticalRel((const wxSVGPathSegLinetoVerticalRel&)src[i]));
        break;
	  case wxPATHSEG_CURVETO_CUBIC_ABS:
        Add(new wxSVGPathSegCurvetoCubicAbs((const wxSVGPathSegCurvetoCubicAbs&)src[i]));
        break;
	  case wxPATHSEG_CURVETO_CUBIC_REL:
        Add(new wxSVGPathSegCurvetoCubicRel((const wxSVGPathSegCurvetoCubicRel&)src[i]));
        break;
	  case wxPATHSEG_CURVETO_CUBIC_SMOOTH_ABS:
        Add(new wxSVGPathSegCurvetoCubicSmoothAbs((const wxSVGPathSegCurvetoCubicSmoothAbs&)src[i]));
        break;
	  case wxPATHSEG_CURVETO_CUBIC_SMOOTH_REL:
        Add(new wxSVGPathSegCurvetoCubicSmoothRel((const wxSVGPathSegCurvetoCubicSmoothRel&)src[i]));
        break;
	  case wxPATHSEG_CURVETO_QUADRATIC_ABS:
        Add(new wxSVGPathSegCurvetoQuadraticAbs((const wxSVGPathSegCurvetoQuadraticAbs&)src[i]));
        break;
	  case wxPATHSEG_CURVETO_QUADRATIC_REL:
        Add(new wxSVGPathSegCurvetoQuadraticRel((const wxSVGPathSegCurvetoQuadraticRel&)src[i]));
        break;
	  case wxPATHSEG_CURVETO_QUADRATIC_SMOOTH_ABS:
        Add(new wxSVGPathSegCurvetoQuadraticSmoothAbs((const wxSVGPathSegCurvetoQuadraticSmoothAbs&)src[i]));
        break;
	  case wxPATHSEG_CURVETO_QUADRATIC_SMOOTH_REL:
        Add(new wxSVGPathSegCurvetoQuadraticSmoothRel((const wxSVGPathSegCurvetoQuadraticSmoothRel&)src[i]));
        break;
	  case wxPATHSEG_ARC_ABS:
        Add(new wxSVGPathSegArcAbs((const wxSVGPathSegArcAbs&)src[i]));
        break;
	  case wxPATHSEG_ARC_REL:
        Add(new wxSVGPathSegArcRel((const wxSVGPathSegArcRel&)src[i]));
        break;
	  case wxPATHSEG_CLOSEPATH:
        Add(new wxSVGPathSegClosePath((const wxSVGPathSegClosePath&)src[i]));
		break;
	  case wxPATHSEG_UNKNOWN:
		break;
	}
  }
}

wxString wxSVGPathSegList::GetValueAsString() const
{
  wxString value;
  for (int i=0; i<(int)GetCount(); i++)
  {
    value += i==0 ? wxT("") : wxT(" ");
    
    wxSVGPathSeg& pathSeg = Item(i);
      
    switch (pathSeg.GetPathSegType())
    {
      case wxPATHSEG_UNKNOWN:
        break;
      case wxPATHSEG_CLOSEPATH:
        value += wxT("z");
        break;
    
      case wxPATHSEG_MOVETO_ABS:
        value += wxString::Format(wxT("M%g,%g"),
                    ((wxSVGPathSegMovetoAbs&)pathSeg).GetX(),
                    ((wxSVGPathSegMovetoAbs&)pathSeg).GetY());
        break;
      case wxPATHSEG_MOVETO_REL:
        value += wxString::Format(wxT("m%g,%g"),
                    ((wxSVGPathSegMovetoRel&)pathSeg).GetX(),
                    ((wxSVGPathSegMovetoRel&)pathSeg).GetY());
        break;
      case wxPATHSEG_LINETO_ABS:
        value += wxString::Format(wxT("L%g,%g"),
                    ((wxSVGPathSegLinetoAbs&)pathSeg).GetX(),
                    ((wxSVGPathSegLinetoAbs&)pathSeg).GetY());
        break;
      case wxPATHSEG_LINETO_REL:
        value += wxString::Format(wxT("l%g,%g"),
                    ((wxSVGPathSegLinetoRel&)pathSeg).GetX(),
                    ((wxSVGPathSegLinetoRel&)pathSeg).GetY());
        break;
      case wxPATHSEG_LINETO_HORIZONTAL_ABS:
        value += wxString::Format(wxT("H%g"),
                    ((wxSVGPathSegLinetoHorizontalAbs&)pathSeg).GetX());
        break;
      case wxPATHSEG_LINETO_HORIZONTAL_REL:
        value += wxString::Format(wxT("h%g"),
                    ((wxSVGPathSegLinetoHorizontalRel&)pathSeg).GetX());
        break;
      case wxPATHSEG_LINETO_VERTICAL_ABS:
        value += wxString::Format(wxT("V%g"),
                    ((wxSVGPathSegLinetoVerticalAbs&)pathSeg).GetY());
        break;
      case wxPATHSEG_LINETO_VERTICAL_REL:
        value += wxString::Format(wxT("v%g"),
                    ((wxSVGPathSegLinetoVerticalRel&)pathSeg).GetY());
        break;
      case wxPATHSEG_CURVETO_CUBIC_ABS:
        value += wxString::Format(wxT("C%g,%g,%g,%g,%g,%g"),
                    ((wxSVGPathSegCurvetoCubicAbs&)pathSeg).GetX1(),
                    ((wxSVGPathSegCurvetoCubicAbs&)pathSeg).GetY1(),
                    ((wxSVGPathSegCurvetoCubicAbs&)pathSeg).GetX2(),
                    ((wxSVGPathSegCurvetoCubicAbs&)pathSeg).GetY2(),
                    ((wxSVGPathSegCurvetoCubicAbs&)pathSeg).GetX(),
                    ((wxSVGPathSegCurvetoCubicAbs&)pathSeg).GetY());
        break;
      case wxPATHSEG_CURVETO_CUBIC_REL:
        value += wxString::Format(wxT("c%g,%g,%g,%g,%g,%g"),
                    ((wxSVGPathSegCurvetoCubicRel&)pathSeg).GetX1(),
                    ((wxSVGPathSegCurvetoCubicRel&)pathSeg).GetY1(),
                    ((wxSVGPathSegCurvetoCubicRel&)pathSeg).GetX2(),
                    ((wxSVGPathSegCurvetoCubicRel&)pathSeg).GetY2(),
                    ((wxSVGPathSegCurvetoCubicRel&)pathSeg).GetX(),
                    ((wxSVGPathSegCurvetoCubicRel&)pathSeg).GetY());
        break;
      case wxPATHSEG_CURVETO_CUBIC_SMOOTH_ABS:
        value += wxString::Format(wxT("S%g,%g,%g,%g"),
                    ((wxSVGPathSegCurvetoCubicSmoothAbs&)pathSeg).GetX2(),
                    ((wxSVGPathSegCurvetoCubicSmoothAbs&)pathSeg).GetY2(),
                    ((wxSVGPathSegCurvetoCubicSmoothAbs&)pathSeg).GetX(),
                    ((wxSVGPathSegCurvetoCubicSmoothAbs&)pathSeg).GetY());
        break;
      case wxPATHSEG_CURVETO_CUBIC_SMOOTH_REL:
        value += wxString::Format(wxT("s%g,%g,%g,%g"),
                    ((wxSVGPathSegCurvetoCubicSmoothRel&)pathSeg).GetX2(),
                    ((wxSVGPathSegCurvetoCubicSmoothRel&)pathSeg).GetY2(),
                    ((wxSVGPathSegCurvetoCubicSmoothRel&)pathSeg).GetX(),
                    ((wxSVGPathSegCurvetoCubicSmoothRel&)pathSeg).GetY());
        break;
      case wxPATHSEG_CURVETO_QUADRATIC_ABS:
        value += wxString::Format(wxT("Q%g,%g,%g,%g"),
                    ((wxSVGPathSegCurvetoQuadraticAbs&)pathSeg).GetX1(),
                    ((wxSVGPathSegCurvetoQuadraticAbs&)pathSeg).GetY1(),
                    ((wxSVGPathSegCurvetoQuadraticAbs&)pathSeg).GetX(),
                    ((wxSVGPathSegCurvetoQuadraticAbs&)pathSeg).GetY());
        break;
      case wxPATHSEG_CURVETO_QUADRATIC_REL:
        value += wxString::Format(wxT("q%g,%g,%g,%g"),
                    ((wxSVGPathSegCurvetoQuadraticRel&)pathSeg).GetX1(),
                    ((wxSVGPathSegCurvetoQuadraticRel&)pathSeg).GetY1(),
                    ((wxSVGPathSegCurvetoQuadraticRel&)pathSeg).GetX(),
                    ((wxSVGPathSegCurvetoQuadraticRel&)pathSeg).GetY());
        break;
      case wxPATHSEG_CURVETO_QUADRATIC_SMOOTH_ABS:
        value += wxString::Format(wxT("T%g,%g"),
                    ((wxSVGPathSegCurvetoQuadraticSmoothAbs&)pathSeg).GetX(),
                    ((wxSVGPathSegCurvetoQuadraticSmoothAbs&)pathSeg).GetY());
        break;
      case wxPATHSEG_CURVETO_QUADRATIC_SMOOTH_REL:
        value += wxString::Format(wxT("t%g,%g"),
                    ((wxSVGPathSegCurvetoQuadraticSmoothRel&)pathSeg).GetX(),
                    ((wxSVGPathSegCurvetoQuadraticSmoothRel&)pathSeg).GetY());
        break;
      case wxPATHSEG_ARC_ABS:
        value += wxString::Format(wxT("A%g,%g,%g,%d,%d,%g,%g"),
                    ((wxSVGPathSegArcAbs&)pathSeg).GetR1(),
                    ((wxSVGPathSegArcAbs&)pathSeg).GetR2(),
                    ((wxSVGPathSegArcAbs&)pathSeg).GetAngle(),
                    ((wxSVGPathSegArcAbs&)pathSeg).GetLargeArcFlag(),
                    ((wxSVGPathSegArcAbs&)pathSeg).GetSweepFlag(),
                    ((wxSVGPathSegArcAbs&)pathSeg).GetX(),
                    ((wxSVGPathSegArcAbs&)pathSeg).GetY());
        break;
      case wxPATHSEG_ARC_REL:
        value += wxString::Format(wxT("a%g,%g,%g,%d,%d,%g,%g"),
                    ((wxSVGPathSegArcRel&)pathSeg).GetR1(),
                    ((wxSVGPathSegArcRel&)pathSeg).GetR2(),
                    ((wxSVGPathSegArcRel&)pathSeg).GetAngle(),
                    ((wxSVGPathSegArcRel&)pathSeg).GetLargeArcFlag(),
                    ((wxSVGPathSegArcRel&)pathSeg).GetSweepFlag(),
                    ((wxSVGPathSegArcRel&)pathSeg).GetX(),
                    ((wxSVGPathSegArcRel&)pathSeg).GetY());
        break;
    }
  }
  return value;
}

inline bool isNumericFirst(wxChar ch) {
	return ch == wxT('+') || ch == wxT('-') || ch == wxT('.') || (ch >= wxT('0') && ch <= wxT('9'));
}

inline bool isNumeric(wxChar ch, wxChar ch2) {
	return ch == wxT('.') || ch == wxT('E') || ch == wxT('e') || (ch >= wxT('0') && ch <= wxT('9'))
		|| ((ch == wxT('+') || ch == wxT('-')) && (ch2 == wxT('E') || ch2 == wxT('e')));
}

void wxSVGPathSegList::SetValueAsString(const wxString& value) {
	const wxString s_commands = wxT("MmZzLlHhVvCcSsQqTtAa");
	const wxString s_separators = wxT(" ,\t\n\r");
	wxChar type = 0;
	double number;
	wxSVGNumberList numbers;
	wxString val = value;
	while (val.Length() && s_separators.Find(val[0]) != wxNOT_FOUND)
		val.Remove(0, 1);
	while (val.Length()) {
		if (s_commands.Find(val[0]) == wxNOT_FOUND)
			break;
		type = val.GetChar(0);
		val.Remove(0, 1);
		
		while (val.Length()) {
			while (val.Length() && s_separators.Find(val[0]) != wxNOT_FOUND)
				val.Remove(0, 1);
			
			unsigned int pos;
			if (val.Length() > 0 && isNumericFirst(val[0])) {
				pos = 1;
				while (val.Length() > pos && isNumeric(val[pos], val[pos - 1]))
					pos++;
				val.Mid(0, pos).ToDouble(&number);
				numbers.Add(number);
				val.Remove(0, pos);
			} else
				break;
		}

		// new path segement
		if (type == wxT('Z') || type == wxT('z'))
			Add(new wxSVGPathSegClosePath);
		else if (type == wxT('M')) {
			int pos = 0;
			while (numbers.Count() - pos >= 2) {
				if (pos == 0) {
					wxSVGPathSegMovetoAbs* pathSeg = new wxSVGPathSegMovetoAbs;
					pathSeg->SetX(numbers[pos++]);
					pathSeg->SetY(numbers[pos++]);
					Add(pathSeg);
				} else {
					wxSVGPathSegLinetoAbs* pathSeg = new wxSVGPathSegLinetoAbs;
					pathSeg->SetX(numbers[pos++]);
					pathSeg->SetY(numbers[pos++]);
					Add(pathSeg);
				}
			}
		} else if (type == wxT('m')) {
			int pos = 0;
			while (numbers.Count() - pos >= 2) {
				if (pos == 0) {
					wxSVGPathSegMovetoRel* pathSeg = new wxSVGPathSegMovetoRel;
					pathSeg->SetX(numbers[pos++]);
					pathSeg->SetY(numbers[pos++]);
					Add(pathSeg);
				} else {
					wxSVGPathSegLinetoRel* pathSeg = new wxSVGPathSegLinetoRel;
					pathSeg->SetX(numbers[pos++]);
					pathSeg->SetY(numbers[pos++]);
					Add(pathSeg);
				}
			}
		} else if (type == wxT('L')) {
			int pos = 0;
			while (numbers.Count() - pos >= 2) {
				wxSVGPathSegLinetoAbs* pathSeg = new wxSVGPathSegLinetoAbs;
				pathSeg->SetX(numbers[pos++]);
				pathSeg->SetY(numbers[pos++]);
				Add(pathSeg);
			}
		} else if (type == wxT('l')) {
			int pos = 0;
			while (numbers.Count() - pos >= 2) {
				wxSVGPathSegLinetoRel* pathSeg = new wxSVGPathSegLinetoRel;
				pathSeg->SetX(numbers[pos++]);
				pathSeg->SetY(numbers[pos++]);
				Add(pathSeg);
			}
		} else if (type == wxT('H')) {
			int pos = 0;
			while (numbers.Count() - pos >= 1) {
				wxSVGPathSegLinetoHorizontalAbs* pathSeg = new wxSVGPathSegLinetoHorizontalAbs;
				pathSeg->SetX(numbers[pos++]);
				Add(pathSeg);
			}
		} else if (type == wxT('h')) {
			int pos = 0;
			while (numbers.Count() - pos >= 1) {
				wxSVGPathSegLinetoHorizontalRel* pathSeg = new wxSVGPathSegLinetoHorizontalRel;
				pathSeg->SetX(numbers[pos++]);
				Add(pathSeg);
			}
		} else if (type == wxT('V')) {
			int pos = 0;
			while (numbers.Count() - pos >= 1) {
				wxSVGPathSegLinetoVerticalAbs* pathSeg = new wxSVGPathSegLinetoVerticalAbs;
				pathSeg->SetY(numbers[pos++]);
				Add(pathSeg);
			}
		} else if (type == wxT('v')) {
			int pos = 0;
			while (numbers.Count() - pos >= 1) {
				wxSVGPathSegLinetoVerticalRel* pathSeg = new wxSVGPathSegLinetoVerticalRel;
				pathSeg->SetY(numbers[pos++]);
				Add(pathSeg);
			}
		} else if (type == wxT('C')) {
			int pos = 0;
			while (numbers.Count() - pos >= 6) {
				wxSVGPathSegCurvetoCubicAbs* pathSeg = new wxSVGPathSegCurvetoCubicAbs;
				pathSeg->SetX1(numbers[pos++]);
				pathSeg->SetY1(numbers[pos++]);
				pathSeg->SetX2(numbers[pos++]);
				pathSeg->SetY2(numbers[pos++]);
				pathSeg->SetX(numbers[pos++]);
				pathSeg->SetY(numbers[pos++]);
				Add(pathSeg);
			}
		} else if (type == wxT('c')) {
			int pos = 0;
			while (numbers.Count() - pos >= 6) {
				wxSVGPathSegCurvetoCubicRel* pathSeg = new wxSVGPathSegCurvetoCubicRel;
				pathSeg->SetX1(numbers[pos++]);
				pathSeg->SetY1(numbers[pos++]);
				pathSeg->SetX2(numbers[pos++]);
				pathSeg->SetY2(numbers[pos++]);
				pathSeg->SetX(numbers[pos++]);
				pathSeg->SetY(numbers[pos++]);
				Add(pathSeg);
			}
		} else if (type == wxT('S')) {
			int pos = 0;
			while (numbers.Count() - pos >= 4) {
				wxSVGPathSegCurvetoCubicSmoothAbs* pathSeg = new wxSVGPathSegCurvetoCubicSmoothAbs;
				pathSeg->SetX2(numbers[pos++]);
				pathSeg->SetY2(numbers[pos++]);
				pathSeg->SetX(numbers[pos++]);
				pathSeg->SetY(numbers[pos++]);
				Add(pathSeg);
			}
		} else if (type == wxT('s')) {
			int pos = 0;
			while (numbers.Count() - pos >= 4) {
				wxSVGPathSegCurvetoCubicSmoothRel* pathSeg = new wxSVGPathSegCurvetoCubicSmoothRel;
				pathSeg->SetX2(numbers[pos++]);
				pathSeg->SetY2(numbers[pos++]);
				pathSeg->SetX(numbers[pos++]);
				pathSeg->SetY(numbers[pos++]);
				Add(pathSeg);
			}
		} else if (type == wxT('Q')) {
			int pos = 0;
			while (numbers.Count() - pos >= 4) {
				wxSVGPathSegCurvetoQuadraticAbs* pathSeg = new wxSVGPathSegCurvetoQuadraticAbs;
				pathSeg->SetX1(numbers[pos++]);
				pathSeg->SetY1(numbers[pos++]);
				pathSeg->SetX(numbers[pos++]);
				pathSeg->SetY(numbers[pos++]);
				Add(pathSeg);
			}
		} else if (type == wxT('q')) {
			int pos = 0;
			while (numbers.Count() - pos >= 4) {
				wxSVGPathSegCurvetoQuadraticRel* pathSeg = new wxSVGPathSegCurvetoQuadraticRel;
				pathSeg->SetX1(numbers[pos++]);
				pathSeg->SetY1(numbers[pos++]);
				pathSeg->SetX(numbers[pos++]);
				pathSeg->SetY(numbers[pos++]);
				Add(pathSeg);
			}
		} else if (type == wxT('T')) {
			int pos = 0;
			while (numbers.Count() - pos >= 2) {
				wxSVGPathSegCurvetoQuadraticSmoothAbs* pathSeg = new wxSVGPathSegCurvetoQuadraticSmoothAbs;
				pathSeg->SetX(numbers[pos++]);
				pathSeg->SetY(numbers[pos++]);
				Add(pathSeg);
			}
		} else if (type == wxT('t')) {
			int pos = 0;
			while (numbers.Count() - pos >= 2) {
				wxSVGPathSegCurvetoQuadraticSmoothRel* pathSeg = new wxSVGPathSegCurvetoQuadraticSmoothRel;
				pathSeg->SetX(numbers[pos++]);
				pathSeg->SetY(numbers[pos++]);
				Add(pathSeg);
			}
		} else if (type == wxT('A')) {
			int pos = 0;
			while (numbers.Count() - pos >= 7) {
				wxSVGPathSegArcAbs* pathSeg = new wxSVGPathSegArcAbs;
				pathSeg->SetR1(numbers[pos++]);
				pathSeg->SetR2(numbers[pos++]);
				pathSeg->SetAngle(numbers[pos++]);
				pathSeg->SetLargeArcFlag(numbers[pos++]);
				pathSeg->SetSweepFlag(numbers[pos++]);
				pathSeg->SetX(numbers[pos++]);
				pathSeg->SetY(numbers[pos++]);
				Add(pathSeg);
			}
		} else if (type == wxT('a')) {
			int pos = 0;
			while (numbers.Count() - pos >= 7) {
				wxSVGPathSegArcRel* pathSeg = new wxSVGPathSegArcRel;
				pathSeg->SetR1(numbers[pos++]);
				pathSeg->SetR2(numbers[pos++]);
				pathSeg->SetAngle(numbers[pos++]);
				pathSeg->SetLargeArcFlag(numbers[pos++]);
				pathSeg->SetSweepFlag(numbers[pos++]);
				pathSeg->SetX(numbers[pos++]);
				pathSeg->SetY(numbers[pos++]);
				Add(pathSeg);
			}
		}
		type = 0;
		numbers.Clear();
	}
}

