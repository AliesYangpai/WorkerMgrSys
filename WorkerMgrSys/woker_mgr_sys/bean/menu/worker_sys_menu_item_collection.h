#pragma once
#include <iostream>
#include "worker_sys_menu_item.h"
using namespace std;
class WorkerSysMenuItemCollection 
{
private:
	int currentIndex = 0;
private:
	WorkerSysMenuItem* m_arr_item;
public:
	WorkerSysMenuItemCollection();
	~WorkerSysMenuItemCollection();

	void add(WorkerSysMenuItem* p_item);
	WorkerSysMenuItem* get(int position);
};