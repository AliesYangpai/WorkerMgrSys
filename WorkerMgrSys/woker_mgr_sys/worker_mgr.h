#pragma once
#include <iostream>
using namespace std;
class WokerMgr 
{
public:
	~WokerMgr();
	WokerMgr();

	void ShowManu();
	void AddWoker();
	bool DelWork();
	void UpdateWorker();
	void ShowAllWorkers();
	void ShowAllWorkdersOrderById();
	void ClearAllWorkers();
};