#pragma once
#include "../base_def.hpp" 
#include "LolGeoinfoGeoInfo.hpp"
namespace lol {
  struct LolGeoinfoGeoInfoResponse { 
    bool success;
    std::string errorMessage;
    LolGeoinfoGeoInfo geoInfo;
    bool isLatest; 
  };
  inline void to_json(json& j, const LolGeoinfoGeoInfoResponse& v) {
    j["success"] = v.success; 
    j["errorMessage"] = v.errorMessage; 
    j["geoInfo"] = v.geoInfo; 
    j["isLatest"] = v.isLatest; 
  }
  inline void from_json(const json& j, LolGeoinfoGeoInfoResponse& v) {
    v.success = j.at("success").get<bool>(); 
    v.errorMessage = j.at("errorMessage").get<std::string>(); 
    v.geoInfo = j.at("geoInfo").get<LolGeoinfoGeoInfo>(); 
    v.isLatest = j.at("isLatest").get<bool>(); 
  }
}