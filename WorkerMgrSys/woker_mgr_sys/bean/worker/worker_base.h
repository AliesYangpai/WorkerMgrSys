#pragma once
#include <iostream>
using namespace std;
class WorkerBase 
{
private:
	string m_name; // ����
	string m_position; // ְλ
	char m_rank;  // ְ�� ��A,B,C��

public:
	~WorkerBase();
	WorkerBase();
	WorkerBase(string name, string position,char rank = 0);
	void set_m_name(string name);
	void set_m_position(string position);
	void set_m_rank(char rank);
	string get_m_name();
	string get_position();
	char get_m_rank();
	virtual void ShowResponsibility() = 0;
};