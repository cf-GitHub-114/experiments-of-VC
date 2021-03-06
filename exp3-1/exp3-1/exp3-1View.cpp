
// exp3-1View.cpp : Cexp31View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp3-1.h"
#endif

#include "exp3-1Doc.h"
#include "exp3-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp31View

IMPLEMENT_DYNCREATE(Cexp31View, CView)

BEGIN_MESSAGE_MAP(Cexp31View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cexp31View 构造/析构

Cexp31View::Cexp31View()
{
	// TODO: 在此处添加构造代码

}

Cexp31View::~Cexp31View()
{
}

BOOL Cexp31View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp31View 绘制

void Cexp31View::OnDraw(CDC* pDC)
{
	Cexp31Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cexp31View 诊断

#ifdef _DEBUG
void Cexp31View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp31View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp31Doc* Cexp31View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp31Doc)));
	return (Cexp31Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp31View 消息处理程序


void Cexp31View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s1;//定义字符串s1
	s1 = "左键正被按下";//初始化字符串变量s1
	CClientDC dc(this);//定义一个CClientDC对象dc
	dc.TextOutW(200, 200, s1);

	CView::OnLButtonDown(nFlags, point);
}


void Cexp31View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s2;//定义字符串s2
	s2 = "左键正在抬起";//初始化字符串变量s2
	CClientDC dc(this);//定义一个CClientDC对象
	dc.TextOutW(200, 300, s2);
	CView::OnLButtonUp(nFlags, point);
}
