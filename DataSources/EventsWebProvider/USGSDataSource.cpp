//
// Created by nicomazz97 on 24/12/16.
//

#include <Utility/TimeUtility.hpp>
#include "USGSDataSource.hpp"

std::string USGSDataSource::getDataSourceName(){
    return "USGS";
}
std::string USGSDataSource::getWebServiceUrl() {
    return "earthquake.usgs.gov";
}

