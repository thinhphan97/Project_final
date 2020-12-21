// tuyenbach

#ifndef projectfinal_database_DeptLocationsDB_h_
#define projectfinal_database_DeptLocationsDB_h_

#include "D:/learncpp/Project_final/businessobject/DeptLocations.h"
#include <iostream>
#include <vector>
using namespace std;

class DeptLocationsDB
{
vector<DeptLocations> DeptLocationList;

public:

    // add deptloacation
    void AddDeptLocation(int ID, int DNumber, string DLocation);
};

#endif