
// Experiment8_1View.h : CExperiment8_1View 类的接口
//

#pragma once


class CExperiment8_1View : public CView
{
protected: // 仅从序列化创建
	CExperiment8_1View();
	DECLARE_DYNCREATE(CExperiment8_1View)

// 特性
public:
	CExperiment8_1Doc* GetDocument() const;

// 操作
public:
	CBitmap m;
	int w;
	int h;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CExperiment8_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Onname();
};

#ifndef _DEBUG  // Experiment8_1View.cpp 中的调试版本
inline CExperiment8_1Doc* CExperiment8_1View::GetDocument() const
   { return reinterpret_cast<CExperiment8_1Doc*>(m_pDocument); }
#endif

