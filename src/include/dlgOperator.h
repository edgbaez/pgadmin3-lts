//////////////////////////////////////////////////////////////////////////
//
// pgAdmin III - PostgreSQL Tools
// RCS-ID:      $Id$
// Copyright (C) 2002 - 2004, The pgAdmin Development Team
// This software is released under the Artistic Licence
//
// dlgOperator.h - Operator property 
//
//////////////////////////////////////////////////////////////////////////


#ifndef __DLG_OPERATORPROP
#define __DLG_OPERATORPROP

#include "dlgProperty.h"

class pgSchema;
class pgOperator;

class dlgOperator : public dlgTypeProperty
{
public:
    dlgOperator(frmMain *frame, pgOperator *op, pgSchema *sch);
    int Go(bool modal);

    wxString GetSql();
    pgObject *CreateObject(pgCollection *collection);
    pgObject *GetObject();

private:
    void OnChange(wxCommandEvent &ev);
    void OnChangeType(wxCommandEvent &ev);
    void OnChangeJoin(wxCommandEvent &ev);

    void AppendFilledOperator(wxString &sql, wxChar *txt, wxComboBox *cb);

    pgSchema *schema;
    pgOperator *oper;
    wxArrayString procedures;

    DECLARE_EVENT_TABLE();
};


#endif
