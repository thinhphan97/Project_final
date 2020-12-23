// tuyenbach

#ifndef projectfinal_businessobject_DeptLocations_h_
#define projectfinal_businessobject_DeptLocations_h_

#include <string>
#include "../libs/json.hpp"

using namespace std;
using json = nlohmann::json;

class DeptLocations
{
    int DeptLocationsID;
    int DNumber;
    string DLocation;

public:
    // construction function default
    DeptLocations();

    // construction function parameters
    DeptLocations(int DeptLocationsID, int DNumber, string DLocation);

    // get DeptLocation ID
    int GetId();

   // get DNumber
    int GetDNumber();

    // get DLocation
    string GetDLocation();

    //convert object to string
    string ToString();

    //convert object to json
    json ToJson();
};

#endif
