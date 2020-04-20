
// exp3-4View.cpp : Cexp34View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp3-4.h"
#endif

#include "exp3-4Doc.h"
#include "exp3-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp34View

IMPLEMENT_DYNCREATE(Cexp34View, CView)

BEGIN_MESSAGE_MAP(Cexp34View, CView)
END_MESSAGE_MAP()

// Cexp34View 构造/析构

Cexp34View::Cexp34View()
{
	// TODO: 在此处添加构造代码

}

Cexp34View::~Cexp34View()
{
}

BOOL Cexp34View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp34View 绘制

void Cexp34View::OnDraw(CDC* /*pDC*/)
{
	Cexp34Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cexp34View 诊断

#ifdef _DEBUG
void Cexp34View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp34View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp34Doc* Cexp34View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp34Doc)));
	return (Cexp34Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp34View 消息处理程序
