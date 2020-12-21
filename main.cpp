#include <iostream>
#include "businessobject/DeptLocations.h"
#include "database/DeptLocationsDB.h"
using namespace std;

int main(){
    DeptLocationsDB db;
    db.AddDeptLocation(1, 2, "danang");
    return 0;
}