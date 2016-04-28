#pragma once

#include <iostream>
#include "CDataChain.h"

class CLink
{
public:
	CLink(CDataChain& refChain);
	virtual ~CLink(void);
	//Пробує прив"язати об"єкт до підстрічки у послідовності
	bool Attach(const char* sSubStr);
	//Форматований вивід на консоль
	virtual void Output(std::ostream& os);
	//Зберігає об"єкт у вихідному потоці
	virtual bool Save(std::ostream& so);
 	//Зчитує об"єкт із вхідного потоку
	virtual bool Load(std::istream& is);
protected:
	//Посилання на контейнер з повною послідовністю
	CDataChain& m_refChain;
	//Позиція початку у повній послідовності
	int m_nPos;
	//Довжина підстрічки, до якої прив"язується об"єкт
	int m_nSize;
};