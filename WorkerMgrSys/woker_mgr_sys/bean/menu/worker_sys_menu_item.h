#pragma once
#include <iostream>
using namespace std;
class WorkerSysMenuItem
{
private:
	char m_num;
	string m_tip;

public:
	WorkerSysMenuItem();
	WorkerSysMenuItem(char num, string tip);
	~WorkerSysMenuItem();

	void set_m_num(char num);
	void set_m_tip(string tip);
	char get_m_num();
	string get_m_tip();


};

