
// MFCAlgorithmShowDlg.h : ͷ�ļ�
//

#pragma once


// CMFCAlgorithmShowDlg �Ի���
class CMFCAlgorithmShowDlg : public CDialogEx
{
// ����
public:
	CMFCAlgorithmShowDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_MFCALGORITHMSHOW_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedCheck4();
	afx_msg void OnLbnSelchangeList1();
};
