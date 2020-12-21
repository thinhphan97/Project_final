// tuyenbach

#include "DeptLocationsDB.h"
using namespace std;

    // add deptloacation
    void DeptLocationsDB::AddDeptLocation(int ID, int DNumber, string DLocation){

        DeptLocationList.push_back(DeptLocations(ID, DNumber, DLocation));

    }
;