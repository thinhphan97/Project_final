#include <iostream>
#include "businessobject/DeptLocations.h"
#include "dataaccess/DeptLocationsDB.h"
using namespace std;

int main()
{
    DeptLocations d1(1, 1, "Houston");
    DeptLocations d2(2, 4, "Stafford");
    DeptLocations d3(3, 5, "Bellaire");
    DeptLocations d4(4, 5, "Sugarland");
    DeptLocations d5(5, 5, "Houston");

    DeptLocationsDB deptLocationsDB;

    deptLocationsDB.AddDeptLocation(d1);
    deptLocationsDB.AddDeptLocation(d2);
    deptLocationsDB.AddDeptLocation(d3);
    deptLocationsDB.AddDeptLocation(d4);
    deptLocationsDB.AddDeptLocation(d5);

    vector<DeptLocations> deptLocationsList = deptLocationsDB.GetData();

    for (DeptLocations d : deptLocationsList)
    {
        // cout << d.GetId() << ", ";
        // cout << d.GetDNumber() << ", ";
        // cout << d.GetDLocation() << endl;

        cout << d.ToString() <<endl;
    }

    // for (int i = 0; i < deptLocationsDB.GetSize(); i++)
    // {
    //      DeptLocations* d =  deptLocationsDB.GetPointer(i);

    //     if (d == nullptr)
    //     {
    //         cout << "can not get Employee" << endl;
    //     }
    //     else
    //     {
    //         cout << d->GetId() << endl;
    //         cout << d->GetDNumber() << endl;
    //         cout << d->GetDLocation() << endl;
    //     }
    //     return 0;
    // }

    return 0;
}