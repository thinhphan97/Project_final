// tuyenbach

#ifndef projectfinal_UI_Dept_Locations_UI_h_
#define projectfinal_UI_Dept_Locations_UI_h_

#include "../businessobject/DeptLocations.h"
#include "../dataaccess/DeptLocationsDB.h"
#include <iostream>
class DeptLocationsUI
{
public:
    DeptLocationsDB deptLocationsDB = DeptLocationsDB("DeptLocation.data");

    //enter DeptLocation from keyboard
    void EnterDeptLocation();
    void SelectAllDeptLocation();
};

#endif