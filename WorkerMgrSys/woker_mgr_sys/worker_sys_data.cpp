#define _CRT_SECURE_NO_WARNINGS 1
#include "worker_sys_data.h"

WorkerSysData::~WorkerSysData() {}
WorkerSysData::WorkerSysData() {}
WorkerSysMenu* WorkerSysData::GenerateWokerManu()
{
	WorkerSysMenu* p_menu = new WorkerSysMenu();
	p_menu->set_m_title("��ӭʹ��ְ������ϵͳ");
	WorkerSysMenuItemCollection* p_menu_items = new WorkerSysMenuItemCollection();
	p_menu_items->add(new WorkerSysMenuItem(0, "�˳�ϵͳ"));
	p_menu_items->add(new WorkerSysMenuItem(1, "����ְ��"));
	p_menu_items->add(new WorkerSysMenuItem(2, "��ʾְ��"));
	p_menu_items->add(new WorkerSysMenuItem(3, "ɾ����ְְ��"));
	p_menu_items->add(new WorkerSysMenuItem(4, "�޸�ְ����Ϣ"));
	p_menu_items->add(new WorkerSysMenuItem(5, "����ְ����Ϣ"));
	p_menu_items->add(new WorkerSysMenuItem(6, "���ձ������"));
	p_menu_items->add(new WorkerSysMenuItem(7, "��������ĵ�"));
	p_menu->set_m_wsmi_collection(p_menu_items);
	return p_menu;
}
