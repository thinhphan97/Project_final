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
    // void setID(int id);
    // void setDnumber(int dnumber);
    // void setdlocation(string dlocation);

};

#endif