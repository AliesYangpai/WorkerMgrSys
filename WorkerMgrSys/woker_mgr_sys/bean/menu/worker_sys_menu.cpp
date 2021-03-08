#define _CRT_SECURE_NO_WARNINGS 1
#include "worker_sys_menu.h"
WorkerSysMenu::WorkerSysMenu() {}
WorkerSysMenu::~WorkerSysMenu() 
{
	delete m_wsmi_collection;
	m_wsmi_collection = NULL;
}
void WorkerSysMenu::set_m_title(string title)
{
	this->m_title = title;
}
void WorkerSysMenu::set_m_wsmi_collection(WorkerSysMenuItemCollection* wsmi_collection)
{
	this->m_wsmi_collection = wsmi_collection;
}

string WorkerSysMenu::get_m_title() 
{
	return this->m_title;
}

WorkerSysMenuItemCollection* WorkerSysMenu::get_m_wsmi_collection()
{
	return this->m_wsmi_collection;
}