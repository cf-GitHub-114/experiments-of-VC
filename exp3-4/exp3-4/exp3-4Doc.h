
// exp3-4Doc.h : Cexp34Doc 类的接口
//


#pragma once


class Cexp34Doc : public CDocument
{
protected: // 仅从序列化创建
	Cexp34Doc();
	DECLARE_DYNCREATE(Cexp34Doc)

// 特性
public:
	CArray<CRect,CRect&>ju;//定义一个元素为矩形的数组
	int a, b;//定义两个整型变量
	int count;//定义整型变量count，用于计算在矩形D中点击的次数
// 操作
public:

// 重写
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// 实现
public:
	virtual ~Cexp34Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// 用于为搜索处理程序设置搜索内容的 Helper 函数
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
