
// exp2-6.h : exp2-6 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// Cexp26App:
// 有关此类的实现，请参阅 exp2-6.cpp
//

class Cexp26App : public CWinApp
{
public:
	Cexp26App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cexp26App theApp;
