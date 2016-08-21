
// mass_storage_mfc.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cmass_storage_mfcApp:
// See mass_storage_mfc.cpp for the implementation of this class
//

class Cmass_storage_mfcApp : public CWinApp
{
public:
	Cmass_storage_mfcApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern Cmass_storage_mfcApp theApp;