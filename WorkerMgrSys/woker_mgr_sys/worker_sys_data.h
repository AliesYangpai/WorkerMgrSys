#pragma once
#include <iostream>
#include "bean/menu/worker_sys_menu.h"
using namespace std;
class WorkerSysData 
{
public:
	~WorkerSysData();
	WorkerSysData();
	WorkerSysMenu* GenerateWokerManu();
};