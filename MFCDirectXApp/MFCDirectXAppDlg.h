
// MFCDirectXAppDlg.h: файл заголовка
//

#pragma once
#pragma comment(lib, "d3d9.lib")
#include <d3d9.h>


// Диалоговое окно CMFCDirectXAppDlg
class CMFCDirectXAppDlg : public CDialogEx
{
// Создание
public:
	CMFCDirectXAppDlg(CWnd* pParent = nullptr);	// стандартный конструктор
	void InitD3D();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCDIRECTXAPP_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// поддержка DDX/DDV

private:
	LPDIRECT3D9 pDirect3D = nullptr;
	LPDIRECT3DDEVICE9 pDirect3DDevice = nullptr;

// Реализация
protected:
	HICON m_hIcon;

	// Созданные функции схемы сообщений
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
