
// tetris.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// tetris_app: 
// �йش����ʵ�֣������ tetris.cpp
//

class tetris_app : public CWinApp
{
public:
	tetris_app();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern tetris_app theApp;