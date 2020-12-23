
#include "DeptLocationsDB.h"
#include <fstream>
#include "../libs/json.hpp"

using json = nlohmann::json;


/**
 * @brief Function contruction no parameters.
 * 
 *Function contruction no parameters.
 */
DeptLocationsDB::DeptLocationsDB()
{
	_maxId = 0;
	_data.resize(0);
}

/**
 * @brief Function get max ID.
 * 
 * Function get max ID.
 * @return a json object
 */
int DeptLocationsDB::GetMaxId()
{
	return _maxId;
}

/**
 * @brief Function add a DeptLocations into _data .
 * 
 * Function add a DeptLocations into _data.
 * @return max Id
 */
int DeptLocationsDB::AddDeptLocation(DeptLocations d)
{

	if (_maxId < d.GetId())
	{
		_maxId = d.GetId();
	}
	_data.push_back(d);
	return _maxId;
}

/**
 * @brief Function get DeptLocations pointer by index .
 * 
 * Function get DeptLocations pointer by index.
 * @return DeptLocations pointer
 * EX: GetPointer(1) -> AABBCCDD;
 */
DeptLocations *DeptLocationsDB::GetPointer(int i)
{
	DeptLocations *d = nullptr;
	if (i >= 0 && i < _data.size())
		d = &_data[i];
	return d;
}

/**
 * @brief Function get ALL DeptLocations in vector .
 * 
 * Function get ALL DeptLocations in vector.
 * @return vector<DeptLocations>
 */


vector<DeptLocations> DeptLocationsDB::GetData()
{
	return _data;
}

//get size
int DeptLocationsDB::GetSize()
{
	return _data.size();
}

/** @brief Function write all data in ProductsData to file.
 *  
 *  Function write all data in ProductsData to file.
 *  @return 1 if success, 0 if fail;
 */
int DeptLocationsDB::ExportToFile(string filename){
    ofstream outFile(filename, ios::out);
    if (!outFile) return 0;
    for (DeptLocations d:_data){
        outFile << d.ToJson() << endl;
    }
    outFile.close();
    return 1;
}
