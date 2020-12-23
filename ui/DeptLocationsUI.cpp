#include "DeptLocationsUI.h"

DeptLocations EnterDeptLocation()
{

    int DeptLocationsID;
    int DNumber;
    string DLocation;

    cout << "Enter DeptLocation infor: ";
    cout << "Enter DeptLocation ID: ";
    cin >> DeptLocationsID;

    cout << "Enter DeptLocation DNumber: ";
    cin >> DNumber;

    cout << "Enter DeptLocation DLocation: ";
    cin >> DLocation;

    return DeptLocations(DeptLocationsID,DNumber, DLocation);
}