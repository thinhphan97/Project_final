// tuyenbach

#ifndef projectfinal_dataaccess_Dept_Locations_DB_h_
#define projectfinal_dataaccess_Dept_Locations_DB_h_

#include "../businessobject/DeptLocations.h"
#include <iostream>
#include <vector>
using namespace std;

class DeptLocationsDB
{
    vector<DeptLocations> _data;
    int _maxId;

public:
    //contructor
    DeptLocationsDB();

    //get max id
    int GetMaxId();

    /** 
 * @brief function write
 * 
 * //
 * @return 
 */
    // add deptloacation

    int AddDeptLocation(DeptLocations);

    //get deptlocations
    DeptLocations *GetPointer(int i);
    //get data
    vector<DeptLocations> GetData();

//get size
    int GetSize();
};

#endif