#include "StdAfx.h"
#include "DiskOperation.h"


DiskOperation::DiskOperation(void)
{
}


DiskOperation::~DiskOperation(void)
{
}

BOOL DiskOperation::OpenUDevice(WCHAR cDriverName)
{
	WCHAR szDriverName[64] = _T("\\\\.\\C:\0");		
	szDriverName[4] = cDriverName;

	CloseDevice();

	m_hDisk = CreateFile(szDriverName,
		GENERIC_READ|GENERIC_WRITE,  FILE_SHARE_READ|FILE_SHARE_WRITE,
		0,OPEN_EXISTING,
		0,0
		);

	return (m_hDisk != INVALID_HANDLE_VALUE);
}

BOOL DiskOperation::CloseDevice()
{
	BOOL bRet = FALSE;

	if(m_hDisk == INVALID_HANDLE_VALUE){
		return FALSE;
	}
	bRet = CloseHandle(m_hDisk);

	m_hDisk = INVALID_HANDLE_VALUE;
	return bRet;
}
