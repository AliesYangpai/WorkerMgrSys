#pragma once
#include <iostream>
#include "worker_sys_menu_item.h"
using namespace std;
class WorkerSysMenuItemCollection 
{
private:
	WorkerSysMenuItem* m_arr_item[8];
public:
	WorkerSysMenuItemCollection();
	~WorkerSysMenuItemCollection();

	void add(WorkerSysMenuItem* p_item);
	WorkerSysMenuItem* getItem(int position);
};