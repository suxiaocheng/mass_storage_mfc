
// mass_storage_mfcDlg.h : header file
//

#pragma once


// Cmass_storage_mfcDlg dialog
class Cmass_storage_mfcDlg : public CDialogEx
{
// Construction
public:
	Cmass_storage_mfcDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_MASS_STORAGE_MFC_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg BOOL OnDeviceChange(UINT wParam, DWORD lParam);
	DECLARE_MESSAGE_MAP()

protected:
	BOOL BuildDiskList(void);
protected:
	vector<char> m_vecDiskLabel;
};
