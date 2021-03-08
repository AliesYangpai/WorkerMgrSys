#define _CRT_SECURE_NO_WARNINGS 1
#include "worker_sys_menu_item_collection.h"
WorkerSysMenuItemCollection::~WorkerSysMenuItemCollection()
{
	if (m_arr_item != NULL)
	{
		for (size_t i = 0; i < 8; i++)
		{
			WorkerSysMenuItem* p_item = &m_arr_item[i];
			delete	p_item;
			p_item = NULL;
		}
		m_arr_item == NULL;
	}
}
WorkerSysMenuItemCollection::WorkerSysMenuItemCollection()
{
	this->m_arr_item = new WorkerSysMenuItem[8];
}

void WorkerSysMenuItemCollection::add(WorkerSysMenuItem* p_item)
{
	if (m_arr_item != NULL)
	{
		m_arr_item[this->currentIndex] = *p_item;
		currentIndex++;
	}
}

WorkerSysMenuItem* WorkerSysMenuItemCollection::get(int position)
{
	if (m_arr_item != NULL)
	{
		return &m_arr_item[position];
	}
	return NULL;
}