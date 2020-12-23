
#include "businessobject/DeptLocations.h"
#include "dataaccess/DeptLocationsDB.h"
#include "ui/DeptLocationsUI.h"
#include "libs/json.hpp"

#include <iostream>
#include "libs/json.hpp"
#include <fstream>
#include <stdio.h>
#include <string.h>

using namespace std;
using json = nlohmann::json;

int main()
{
    // DeptLocations d1(1, 1, "Houston");
    // DeptLocations d2(2, 4, "Stafford");
    // DeptLocations d3(3, 5, "Bellaire");
    // DeptLocations d4(4, 5, "Sugarland");
    // DeptLocations d5(5, 5, "Houston");



    DeptLocationsDB deptLocationsDB;

    deptLocationsDB.AddDeptLocation(d1);
    deptLocationsDB.AddDeptLocation(d2);
    deptLocationsDB.AddDeptLocation(d3);
    deptLocationsDB.AddDeptLocation(d4);
    deptLocationsDB.AddDeptLocation(d5);

    // vector<DeptLocations> deptLocationsList = deptLocationsDB.GetData();

    // for (DeptLocations d : deptLocationsList)
    // {
    //     // cout << d.GetId() << ", ";
    //     // cout << d.GetDNumber() << ", ";
    //     // cout << d.GetDLocation() << endl;

    //     cout << d.ToString() <<endl;
    //     deptLocationsDB.ExportToFile("DeptLocation");
    // }

    for (int i = 0; i < deptLocationsDB.GetSize(); i++)
    {
         DeptLocations* d =  deptLocationsDB.GetPointer(i);

        if (d == nullptr)
        {
            cout << "can not get Employee" << endl;
        }
        else
        {
            deptLocationsDB.ExportToFile("DeptLocation");
        }
    }


    return 0;
}
