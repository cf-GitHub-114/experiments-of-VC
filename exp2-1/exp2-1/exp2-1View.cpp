
// exp2-1View.cpp : Cexp21View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp2-1.h"
#endif

#include "exp2-1Doc.h"
#include "exp2-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp21View

IMPLEMENT_DYNCREATE(Cexp21View, CView)

BEGIN_MESSAGE_MAP(Cexp21View, CView)
END_MESSAGE_MAP()

// Cexp21View ����/����

Cexp21View::Cexp21View()
{
	// TODO: �ڴ˴����ӹ������

}

Cexp21View::~Cexp21View()
{
}

BOOL Cexp21View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp21View ����

void Cexp21View::OnDraw(CDC* pDC)
{
	Cexp21Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ�����������ӻ��ƴ���
	CString s;     //�����ַ���s
	s = "����ѧ��";   //��ʼ���ַ���s
	int A;    //������������A
	A = 123;   //��ʼ����������A
	pDC->TextOut(200, 200, s);//����ַ���s
	CString s1;//����һ���ַ���s1�����������������A
	s1.Format(_T("%d"),A);//����������ת��ΪCString�ַ���
	pDC->TextOut(200, 300, s1);//���ַ������
}


// Cexp21View ���

#ifdef _DEBUG
void Cexp21View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp21View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp21Doc* Cexp21View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp21Doc)));
	return (Cexp21Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp21View ��Ϣ��������