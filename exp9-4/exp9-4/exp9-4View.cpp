
// exp9-4View.cpp : Cexp94View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp9-4.h"
#endif

#include "exp9-4Doc.h"
#include "exp9-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp94View

IMPLEMENT_DYNCREATE(Cexp94View, CView)

BEGIN_MESSAGE_MAP(Cexp94View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cexp94View 构造/析构

Cexp94View::Cexp94View()
{
	// TODO: 在此处添加构造代码
	flag = 0;
	mouse = NULL;
}

Cexp94View::~Cexp94View()
{
}

BOOL Cexp94View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp94View 绘制

void Cexp94View::OnDraw(CDC* pDC)
{
	Cexp94Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	int n = pDoc->ca.GetCount();
	for (int i = 0; i < n; i++)
	{
		pDC->Ellipse(pDoc->ca[i]);
	}
	pDC->Ellipse(cr);

}


// Cexp94View 诊断

#ifdef _DEBUG
void Cexp94View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp94View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp94Doc* Cexp94View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp94Doc)));
	return (Cexp94Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp94View 消息处理程序


void Cexp94View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	flag = 1;//鼠标左键点击
	mouse = point;

	CView::OnLButtonDown(nFlags, point);
}


void Cexp94View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (flag == 1)//鼠标左键点击
	{
		cr.left = mouse.x;       
		cr.top = mouse.y;
		cr.right = point.x;
		cr.bottom = point.y;
		InvalidateRect(&cr);   

	}

	CView::OnMouseMove(nFlags, point);
}


void Cexp94View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cexp94Doc* pDoc = GetDocument();
	flag = 0;
	pDoc->ca.Add(cr);

	CView::OnLButtonUp(nFlags, point);
}
