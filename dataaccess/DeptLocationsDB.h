// tuyenbach

#ifndef projectfinal_dataaccess_Dept_Locations_DB_h_
#define projectfinal_dataaccess_Dept_Locations_DB_h_

#include "../businessobject/DeptLocations.h"
#include "../libs/json.hpp"
#include <vector>
#include <fstream>

class DeptLocationsDB
{
    vector<DeptLocations> _data;
    int _maxId;

public:
    //contructor
    DeptLocationsDB();

    DeptLocationsDB(string filename);

    //get max id
    int GetMaxId();

    // DeptLocations GetDepLocation(int i)
    // {
    //     string s("index out of bound!");
    //     if (i < 0)
    //         throw s;
    //     if (i >= _data.size())
    //         throw s;
    //     return _data[i];
    // }

    // add deptloacation
    int AddDeptLocation(DeptLocations);

    //get deptlocations
    DeptLocations *GetPointer(int i);

    //get data
    vector<DeptLocations> GetData();

    //get A DeptLocations by id
    // DeptLocations GetDeptLocations(int id);

    //get size
    int GetSize();

    //export to file
    int ExportToFile(string filename);


    string ReadFile(string filename);
};

#endif