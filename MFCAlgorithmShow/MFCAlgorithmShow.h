
// MFCAlgorithmShow.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMFCAlgorithmShowApp: 
// �йش����ʵ�֣������ MFCAlgorithmShow.cpp
//

class CMFCAlgorithmShowApp : public CWinApp
{
public:
	CMFCAlgorithmShowApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMFCAlgorithmShowApp theApp;