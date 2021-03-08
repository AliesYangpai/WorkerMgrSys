#define _CRT_SECURE_NO_WARNINGS 1
#include "worker_sys_data.h"

WorkerSysData::~WorkerSysData() {}
WorkerSysData::WorkerSysData() {}
WorkerSysMenu* WorkerSysData::GenerateWokerManu()
{
	WorkerSysMenu* p_menu = new WorkerSysMenu();
	p_menu->set_m_title("欢迎使用职工管理系统");
	WorkerSysMenuItemCollection* p_menu_items = new WorkerSysMenuItemCollection();
	p_menu_items->add(new WorkerSysMenuItem(0, "退出系统"));
	p_menu_items->add(new WorkerSysMenuItem(1, "增加职工"));
	p_menu_items->add(new WorkerSysMenuItem(2, "显示职工"));
	p_menu_items->add(new WorkerSysMenuItem(3, "删除离职职工"));
	p_menu_items->add(new WorkerSysMenuItem(4, "修改职工信息"));
	p_menu_items->add(new WorkerSysMenuItem(5, "查找职工信息"));
	p_menu_items->add(new WorkerSysMenuItem(6, "按照编号排序"));
	p_menu_items->add(new WorkerSysMenuItem(7, "清空所有文档"));
	p_menu->set_m_wsmi_collection(p_menu_items);
	return p_menu;
}

