// tuyenbach

#include "DeptLocations.h"

/**
 * @brief Function contruction no parameters.
 * 
 *Function contruction no parameters.
 */
DeptLocations::DeptLocations() {}

/**
 * @brief Function contruction have parameters DeptLocationsID, DNumber, DLocation.
 * 
 *Function contruction have parameters.
 */
DeptLocations::DeptLocations(int DeptLocationsID, int DNumber, string DLocation)
{
    this->DeptLocationsID = DeptLocationsID;
    this->DNumber = DNumber;
    this->DLocation = DLocation;
}


/**
 * @brief Function get ID value in this object.
 * 
 * Function get ID value in this object.
 * @return a int ID
 */

int DeptLocations::GetId()
{
    return DeptLocationsID;
}


/**
 * @brief Function get Dnumber value in this object.
 * 
 * Function get Dnumber value in this object.
 * @return a int GetDNumber
 */
int DeptLocations::GetDNumber()
{
    return DNumber;
}

/**
 * @brief Function get DLocation in this object.
 * 
 * Function get DLocation in this object.
 * @return a string DLocation
 * EX: "Houston"
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
    s += to_string(DeptLocationsID) + ", ";
    s += to_string(DNumber) + ", ";
    s += DLocation;
    s += " }";
    return s;
}


/**
 * @brief Function converts this object to json.
 * 
 * Function converts this object to json.
 * @return a json object
 * EX: DeptLocations d(1,1,"Houston") -> "{"DeptLocationsID":1,"DNumber": 1, "DLocation":Houston}"
 */

 json DeptLocations::ToJson(){
json j;
    j["DeptLocationsID"] = DeptLocationsID;
    j["DNumber"] = DNumber;
    j["DLocation"] = DLocation;
    return j;
 }
