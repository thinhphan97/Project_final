// tuyenbach

#include "DeptLocations.h"

// construction function default
DeptLocations::DeptLocations() {}

// construction function parameters
DeptLocations::DeptLocations(int ID, int DNumber, string DLocation)
{
    this->ID = ID;
    this->DNumber = DNumber;
    this->DLocation = DLocation;
}

int DeptLocations::GetId()
{
    return ID;
}
int DeptLocations::GetDNumber()
{
    return DNumber;
}

/**
 * @brief Function get DLocation in this object.
 * 
 * Function get DLocation in this object.
 * @return a string DLocation
 * EX: DeptLocations d(1,1,"Houston") -> "{1, 1, Houston}"
 */

string DeptLocations::GetDLocation()
{
    return DLocation;
}

/**
 * @brief Function converts this object to string.
 * 
 * Function converts this object to string.
 * @return a string object
 * EX: DeptLocations d(1,1,"Houston") -> "{1, 1, Houston}"
 */

string DeptLocations::ToString()
{
    string s;
    s += "{";
    s += to_string(ID) + ", ";
    s += to_string(DNumber) + ", ";
    s += DLocation;
    s += " }";
    return s;
}
