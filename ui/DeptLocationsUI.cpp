#include "DeptLocationsUI.h"

void DeptLocationsUI::EnterDeptLocation()
{
    int DeptLocationsID;
    int DNumber;
    string DLocation;

    char enter('n');
    do
        {
            cout << "Enter DeptLocation infor: ";
            cout << "Enter DeptLocation ID: ";
            cin >> DeptLocationsID;

            cout << "Enter DeptLocation DNumber: ";
            cin >> DNumber;

            cout << "Enter DeptLocation DLocation: ";
            cin >> DLocation;

            DeptLocations deptLocations(DeptLocationsID, DNumber, DLocation);

            deptLocationsDB.AddDeptLocation(deptLocations);
            cout << "Continute ? (y/n) ";
            cin >> enter;
        }
    while(enter == 'y');

        deptLocationsDB.ExportToFile("DeptLocation.data");
}

void DeptLocationsUI::SelectAllDeptLocation()
{
    string deptLocationsString = deptLocationsDB.ReadFile("DeptLocation.data");
    cout << deptLocationsString;
}