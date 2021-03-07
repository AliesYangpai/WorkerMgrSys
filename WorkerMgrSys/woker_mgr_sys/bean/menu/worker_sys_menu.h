#pragma once
#include <iostream>
#include "worker_sys_menu_item_collection.h"
using namespace std;
class WorkerSysMenu 
{
private:
	string m_title;
private:
	WorkerSysMenuItemCollection* m_wsmi_collection;
public:
	~WorkerSysMenu();
	WorkerSysMenu();
	
	void set_m_title(string title);
	void set_m_wsmi_collection(WorkerSysMenuItemCollection* m_wsmi_collection);
	string get_m_title();
	WorkerSysMenuItemCollection* get_m_wsmi_collection();
};