
// exp2-5View.h : Cexp25View ��Ľӿ�
//

#pragma once


class Cexp25View : public CView
{
protected: // �������л�����
	Cexp25View();
	DECLARE_DYNCREATE(Cexp25View)

// ����
public:
	Cexp25Doc* GetDocument() const;
	int x;//�ͻ������ĵĺ�����
	int y;//�ͻ������ĵ�������
// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexp25View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // exp2-5View.cpp �еĵ��԰汾
inline Cexp25Doc* Cexp25View::GetDocument() const
   { return reinterpret_cast<Cexp25Doc*>(m_pDocument); }
#endif
