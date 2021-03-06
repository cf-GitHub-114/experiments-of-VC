
// exp8-1View.h : Cexp81View 类的接口
//

#pragma once


class Cexp81View : public CView
{
protected: // 仅从序列化创建
	Cexp81View();
	DECLARE_DYNCREATE(Cexp81View)

// 特性
public:
	Cexp81Doc* GetDocument() const;

// 操作
public:
	CString filename;//定义一个装文件名的变量
	int flag;// 定义一个标志已经获得文件名的变量

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexp81View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnShowfilename();
};

#ifndef _DEBUG  // exp8-1View.cpp 中的调试版本
inline Cexp81Doc* Cexp81View::GetDocument() const
   { return reinterpret_cast<Cexp81Doc*>(m_pDocument); }
#endif

