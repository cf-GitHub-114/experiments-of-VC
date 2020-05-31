
// exp8-2Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "exp8-2.h"
#include "exp8-2Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// Cexp82Dlg �Ի���



Cexp82Dlg::Cexp82Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_EXP82_DIALOG, pParent)
	, a(0)
	, b(0)
	, c(0)
	, errorMes(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void Cexp82Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO1, comboBox);
	DDX_Text(pDX, IDC_EDIT1, a);
	DDX_Text(pDX, IDC_EDIT2, b);
	DDX_Text(pDX, IDC_EDIT3, c);
	DDX_Text(pDX, IDC_EDIT4, errorMes);
}

BEGIN_MESSAGE_MAP(Cexp82Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &Cexp82Dlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// Cexp82Dlg ��Ϣ��������

BOOL Cexp82Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵������ӵ�ϵͳ�˵��С�
	comboBox.InsertString(-1, _T("+"));   //�����ַ���  
	comboBox.InsertString(-1, _T("-"));
	comboBox.InsertString(-1, _T("*"));
	comboBox.InsertString(-1, _T("/"));
	comboBox.InsertString(-1, _T("sqrt"));
	comboBox.InsertString(-1, _T("1/n"));

	comboBox.SetCurSel(0);   //Ĭ��ѡ���һ��

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ����Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void Cexp82Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի���������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void Cexp82Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR Cexp82Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void Cexp82Dlg::OnBnClickedButton1()
{
	// TODO: �ڴ����ӿؼ�֪ͨ�����������
	this->UpdateData(true);//��ǰ̨���ݴ�����̨ 
	switch (comboBox.GetCurSel()) {// ȡ�õ�ǰ��ѡ��¼��comboBox.GetCurSel();
	case 0:    //��'0'δ��Ԥ�ƽ��
		c = a + b;
		break;
	case 1:
		c = a - b;
		break;
	case 2:
		c = a * b;
		break;
	case 3:
		if (b != 0) {//��������ĸ����Ϊ0
			c = a / b;
		}
		else {
			errorMes = (_T("������Ϣ����,���飡����"));
		}
		break;
	case 4:
		if(a >= 0)//��������Ҫ���ڵ���0
		{
			c = sqrt(a);
		}	
		else {
			errorMes = (_T("������Ϣ����,���飡����"));
		}
		break;
	case 5:
		if (a != 0 && b != 0)//���������ӷ�ĸ������Ϊ0
		{
			c = b / a;		
		}
		else {
			errorMes = (_T("������Ϣ����,���飡����"));
		}
		break;
	}	
	UpdateData(false);//����̨���ݴ���ǰ̨
}