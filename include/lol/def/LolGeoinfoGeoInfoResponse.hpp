#pragma once
#include "../base_def.hpp" 
#include "LolGeoinfoGeoInfo.hpp"
namespace lol {
  struct LolGeoinfoGeoInfoResponse { 
    bool isLatest;
    LolGeoinfoGeoInfo geoInfo;
    std::string errorMessage;
    bool success; 
  };
  inline void to_json(json& j, const LolGeoinfoGeoInfoResponse& v) {
    j["isLatest"] = v.isLatest; 
    j["geoInfo"] = v.geoInfo; 
    j["errorMessage"] = v.errorMessage; 
    j["success"] = v.success; 
  }
  inline void from_json(const json& j, LolGeoinfoGeoInfoResponse& v) {
    v.isLatest = j.at("isLatest").get<bool>(); 
    v.geoInfo = j.at("geoInfo").get<LolGeoinfoGeoInfo>(); 
    v.errorMessage = j.at("errorMessage").get<std::string>(); 
    v.success = j.at("success").get<bool>(); 
  }
}