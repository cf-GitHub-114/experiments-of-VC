
// exp5-3View.h : Cexp53View 类的接口
//

#pragma once


class Cexp53View : public CView
{
protected: // 仅从序列化创建
	Cexp53View();
	DECLARE_DYNCREATE(Cexp53View)

// 特性
public:
	Cexp53Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexp53View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnViewShowname();
};

#ifndef _DEBUG  // exp5-3View.cpp 中的调试版本
inline Cexp53Doc* Cexp53View::GetDocument() const
   { return reinterpret_cast<Cexp53Doc*>(m_pDocument); }
#endif

