//////////////////////////////////////////////////////////////////////////////
// Name:        SVGTransform.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_TRANSFORM_H
#define WX_SVG_TRANSFORM_H

#include "SVGMatrix.h"
#include "String_wxsvg.h"


enum wxSVG_TRANSFORM
{
  wxSVG_TRANSFORM_UNKNOWN = 0,
  wxSVG_TRANSFORM_MATRIX = 1,
  wxSVG_TRANSFORM_TRANSLATE = 2,
  wxSVG_TRANSFORM_SCALE = 3,
  wxSVG_TRANSFORM_ROTATE = 4,
  wxSVG_TRANSFORM_SKEWX = 5,
  wxSVG_TRANSFORM_SKEWY = 6
};

class wxSVGTransform
{
  protected:
    wxSVG_TRANSFORM m_type;
    wxSVGMatrix m_matrix;
    double m_angle;
    double m_cx;
    double m_cy;

  public:
    inline wxSVG_TRANSFORM GetType() const { return m_type; }
    inline void SetType(const wxSVG_TRANSFORM& n) { m_type = n; }

    inline const wxSVGMatrix& GetMatrix() const { return m_matrix; }
    inline double GetAngle() const { return m_angle; }
    inline void SetAngle(double n) { m_angle = n; }

  public:
    wxSVGTransform(): m_type(wxSVG_TRANSFORM(0)), m_angle(0), m_cx(0), m_cy(0) {}
    wxSVGTransform(const wxSVGMatrix& matrix): m_type(wxSVG_TRANSFORM_MATRIX), m_matrix(matrix), m_angle(0), m_cx(0), m_cy(0) {}
    virtual ~wxSVGTransform() {}
    
    wxString GetValueAsString() const;
    void SetValueAsString(const wxString& value);
    
    inline void SetMatrix(const wxSVGMatrix& n) { m_type = wxSVG_TRANSFORM_MATRIX; m_matrix = n; }
    virtual void SetTranslate(double tx, double ty);
    virtual void SetScale(double sx, double sy);
    virtual void SetRotate(double angle, double cx, double cy);
    virtual void SetSkewX(double angle);
    virtual void SetSkewY(double angle);
};

#endif // WX_SVG_TRANSFORM_H
