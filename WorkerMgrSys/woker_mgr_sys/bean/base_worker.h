#pragma once
#include <iostream>
using namespace std;
class BaseWorker 
{
private:
	string m_name; // 姓名
	string m_position; // 职位
	char m_rank;  // 职级 （A,B,C）

public:
	~BaseWorker();
	BaseWorker();
	BaseWorker(string name, string position,char rank = 0);
	void set_m_name(string name);
	void set_m_position(string position);
	void set_m_rank(char rank);
	string get_m_name();
	string get_position();
	char get_m_rank();
	virtual void showResponsibility() = 0;
};