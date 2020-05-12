
// exp2-6View.cpp : Cexp26View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp2-6.h"
#endif

#include "exp2-6Doc.h"
#include "exp2-6View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp26View

IMPLEMENT_DYNCREATE(Cexp26View, CView)

BEGIN_MESSAGE_MAP(Cexp26View, CView)
END_MESSAGE_MAP()

// Cexp26View 构造/析构

Cexp26View::Cexp26View()
{
	// TODO: 在此处添加构造代码

}

Cexp26View::~Cexp26View()
{
}

BOOL Cexp26View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp26View 绘制

void Cexp26View::OnDraw(CDC* /*pDC*/)
{
	Cexp26Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cexp26View 诊断

#ifdef _DEBUG
void Cexp26View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp26View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp26Doc* Cexp26View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp26Doc)));
	return (Cexp26Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp26View 消息处理程序
