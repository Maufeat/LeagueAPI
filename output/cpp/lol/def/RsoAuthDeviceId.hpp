#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RsoAuthDeviceId { 
    std::string frameUrl;
    std::string sessionId;
    std::string merchantId;
    std::string installId;
    std::string collectorServerName; 
  };
  inline void to_json(json& j, const RsoAuthDeviceId& v) {
    j["frameUrl"] = v.frameUrl; 
    j["sessionId"] = v.sessionId; 
    j["merchantId"] = v.merchantId; 
    j["installId"] = v.installId; 
    j["collectorServerName"] = v.collectorServerName; 
  }
  inline void from_json(const json& j, RsoAuthDeviceId& v) {
    v.frameUrl = j.at("frameUrl").get<std::string>(); 
    v.sessionId = j.at("sessionId").get<std::string>(); 
    v.merchantId = j.at("merchantId").get<std::string>(); 
    v.installId = j.at("installId").get<std::string>(); 
    v.collectorServerName = j.at("collectorServerName").get<std::string>(); 
  }
}