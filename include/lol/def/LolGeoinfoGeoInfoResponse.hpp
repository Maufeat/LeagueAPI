#pragma once
#include "../base_def.hpp" 
#include "LolGeoinfoGeoInfo.hpp"
namespace lol {
  struct LolGeoinfoGeoInfoResponse { 
    bool success;
    LolGeoinfoGeoInfo geoInfo;
    std::string errorMessage;
    bool isLatest; 
  };
  inline void to_json(json& j, const LolGeoinfoGeoInfoResponse& v) {
    j["success"] = v.success; 
    j["geoInfo"] = v.geoInfo; 
    j["errorMessage"] = v.errorMessage; 
    j["isLatest"] = v.isLatest; 
  }
  inline void from_json(const json& j, LolGeoinfoGeoInfoResponse& v) {
    v.success = j.at("success").get<bool>(); 
    v.geoInfo = j.at("geoInfo").get<LolGeoinfoGeoInfo>(); 
    v.errorMessage = j.at("errorMessage").get<std::string>(); 
    v.isLatest = j.at("isLatest").get<bool>(); 
  }
}