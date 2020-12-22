
#include "DeptLocationsDB.h"
using namespace std;

//contructor
DeptLocationsDB::DeptLocationsDB()
{
	_maxId = 0;
	_data.resize(0);
}

//get max id
int DeptLocationsDB::GetMaxId()
{
	return _maxId;
}

// add deptloacation
int DeptLocationsDB::AddDeptLocation(DeptLocations d)
{

	if (_maxId < d.GetId())
	{
		_maxId = d.GetId();
	}
	_data.push_back(d);
	return _maxId;
}
//get deptlocations
DeptLocations *DeptLocationsDB::GetPointer(int i)
{
	DeptLocations *d = nullptr;
	if (i >= 0 && i < _data.size())
		d = &_data[i];
	return d;
}
vector<DeptLocations> DeptLocationsDB::GetData()
{
	return _data;
}

//get size
int DeptLocationsDB::GetSize()
{
	return _data.size();
}
