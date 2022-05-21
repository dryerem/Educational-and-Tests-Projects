
// MFCDirectXApp.h: главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить pch.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CMFCDirectXAppApp:
// Сведения о реализации этого класса: MFCDirectXApp.cpp
//

class CMFCDirectXAppApp : public CWinApp
{
public:
	CMFCDirectXAppApp();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CMFCDirectXAppApp theApp;
