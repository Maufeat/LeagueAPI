#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolGeoinfoGeoInfo.hpp>
namespace lol {
  struct LolGeoinfoGeoInfoResponse { 
    std::string errorMessage;
    LolGeoinfoGeoInfo geoInfo;
    bool isLatest;
    bool success; 
  };
  void to_json(json& j, const LolGeoinfoGeoInfoResponse& v) {
  j["errorMessage"] = v.errorMessage; 
  j["geoInfo"] = v.geoInfo; 
  j["isLatest"] = v.isLatest; 
  j["success"] = v.success; 
  }
  void from_json(const json& j, LolGeoinfoGeoInfoResponse& v) {
  v.errorMessage = j.at("errorMessage").get<std::string>(); 
  v.geoInfo = j.at("geoInfo").get<LolGeoinfoGeoInfo>(); 
  v.isLatest = j.at("isLatest").get<bool>(); 
  v.success = j.at("success").get<bool>(); 
  }
}