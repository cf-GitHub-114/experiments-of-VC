
// exp2-3View.h : Cexp23View 类的接口
//

#pragma once


class Cexp23View : public CView
{
protected: // 仅从序列化创建
	Cexp23View();
	DECLARE_DYNCREATE(Cexp23View)

// 特性
public:
	Cexp23Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexp23View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // exp2-3View.cpp 中的调试版本
inline Cexp23Doc* Cexp23View::GetDocument() const
   { return reinterpret_cast<Cexp23Doc*>(m_pDocument); }
#endif

