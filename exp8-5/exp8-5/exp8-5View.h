
// exp8-5View.h : Cexp85View ��Ľӿ�
//

#pragma once


class Cexp85View : public CView
{
protected: // �������л�����
	Cexp85View();
	DECLARE_DYNCREATE(Cexp85View)

// ����
public:
	Cexp85Doc* GetDocument() const;

// ����
public:
	CRect rect;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexp85View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // exp8-5View.cpp �еĵ��԰汾
inline Cexp85Doc* Cexp85View::GetDocument() const
   { return reinterpret_cast<Cexp85Doc*>(m_pDocument); }
#endif
