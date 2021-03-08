#pragma once
#include "worker_base.h"

class WokerCommon :public WorkerBase {
public:
	~WokerCommon();
	WokerCommon();
	WokerCommon(string name, string position, char rank);
	void ShowResponsibility();
};

class WokerManager :public WorkerBase {
public:
	~WokerManager();
	WokerManager();
	WokerManager(string name, string position, char rank);
	void ShowResponsibility();
};

class WokerBoss :public WorkerBase {

public:
	~WokerBoss();
	WokerBoss();
	WokerBoss(string name, string position, char rank);
	void ShowResponsibility();
};