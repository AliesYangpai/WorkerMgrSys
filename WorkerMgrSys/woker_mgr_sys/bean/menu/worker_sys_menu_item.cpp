#define _CRT_SECURE_NO_WARNINGS 1
#include "worker_sys_menu_item.h"
WorkerSysMenuItem::WorkerSysMenuItem() {}
WorkerSysMenuItem::~WorkerSysMenuItem() 
{

}
WorkerSysMenuItem::WorkerSysMenuItem(char num, string tip) 
{
	this->m_num = num;
	this->m_tip = tip;
}

void WorkerSysMenuItem::set_m_num(char num) 
{
	this->m_num = num;
}

void WorkerSysMenuItem::set_m_tip(string tip) 
{
	this->m_tip = tip;
}

char WorkerSysMenuItem::get_m_num() 
{
	return this->get_m_num();
}

string WorkerSysMenuItem::get_m_tip() 
{
	return this->get_m_tip();
}

