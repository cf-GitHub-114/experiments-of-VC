#pragma once


// MyDlg03 �Ի���

class MyDlg03 : public CDialogEx
{
	DECLARE_DYNAMIC(MyDlg03)

public:
	MyDlg03(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MyDlg03();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString str1;
	int str2;
	CString str3;
	afx_msg void OnBnClickedButton1();
};