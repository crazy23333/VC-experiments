// Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "Experiment13_2.h"
#include "Dlg.h"
#include "afxdialogex.h"


// Dlg 对话框

IMPLEMENT_DYNAMIC(Dlg, CDialogEx)

Dlg::Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
	, y(0)
	, height(0)
	, width(0)
{

}

Dlg::~Dlg()
{
}

void Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDX_Text(pDX, IDC_EDIT3, height);
	DDX_Text(pDX, IDC_EDIT4, width);
}


BEGIN_MESSAGE_MAP(Dlg, CDialogEx)
END_MESSAGE_MAP()


// Dlg 消息处理程序
