#pragma once

typedef struct _SCSI_PASS_THROUGH {
	USHORT Length;
	UCHAR ScsiStatus;
	UCHAR PathId;
	UCHAR TargetId;
	UCHAR Lun;
	UCHAR CdbLength;
	UCHAR SenseInfoLength;
	UCHAR DataIn;
	ULONG DataTransferLength;
	ULONG TimeOutValue;
	ULONG DataBufferOffset;
	ULONG SenseInfoOffset;
	UCHAR Cdb[16];
}SCSI_PASS_THROUGH, *pSCSI_PASS_THROUGH;

class DiskOperation
{
public:
	DiskOperation(void);
	~DiskOperation(void);

public:
	BOOL OpenUDevice(WCHAR devPath);
	BOOL CloseDevice();

private:
	HANDLE m_hDisk;
};

