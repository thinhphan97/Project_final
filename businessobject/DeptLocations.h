// tuyenbach

#ifndef projectfinal_businessobject_DeptLocations_h_
#define projectfinal_businessobject_DeptLocations_h_

#include <iostream>
using namespace std;

class DeptLocations
{
    int ID;
    int DNumber;
    string DLocation;

public:
    // construction function default
    DeptLocations();

    // construction function parameters
    DeptLocations(int ID, int DNumber, string DLocation);

    // get DeptLocation ID
    int GetId();
    int GetDNumber();
    string GetDLocation();

    string ToString();
};

#endif