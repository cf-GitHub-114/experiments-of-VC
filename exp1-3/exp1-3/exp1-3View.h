
// exp1-3View.h : Cexp13View 类的接口
//

#pragma once


class Cexp13View : public CView
{
protected: // 仅从序列化创建
	Cexp13View();
	DECLARE_DYNCREATE(Cexp13View)

// 特性
public:
	Cexp13Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexp13View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CString s2;

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // exp1-3View.cpp 中的调试版本
inline Cexp13Doc* Cexp13View::GetDocument() const
   { return reinterpret_cast<Cexp13Doc*>(m_pDocument); }
#endif

