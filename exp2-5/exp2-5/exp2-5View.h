
// exp2-5View.h : Cexp25View 类的接口
//

#pragma once


class Cexp25View : public CView
{
protected: // 仅从序列化创建
	Cexp25View();
	DECLARE_DYNCREATE(Cexp25View)

// 特性
public:
	Cexp25Doc* GetDocument() const;
	int x;//客户区中心的横坐标
	int y;//客户区中心的纵坐标
// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexp25View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // exp2-5View.cpp 中的调试版本
inline Cexp25Doc* Cexp25View::GetDocument() const
   { return reinterpret_cast<Cexp25Doc*>(m_pDocument); }
#endif

