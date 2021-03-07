#pragma once
#include <iostream>
using namespace std;
class BaseWorker 
{
private:
	string m_name; // ����
	string m_position; // ְλ
	char m_rank;  // ְ�� ��A,B,C��

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