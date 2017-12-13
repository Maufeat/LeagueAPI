#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct RsoAuthDeviceId { 
    std::string collectorServerName;
    std::string sessionId;
    std::string installId;
    std::string merchantId;
    std::string frameUrl; 
  };
  void to_json(json& j, const RsoAuthDeviceId& v) {
  j["collectorServerName"] = v.collectorServerName; 
  j["sessionId"] = v.sessionId; 
  j["installId"] = v.installId; 
  j["merchantId"] = v.merchantId; 
  j["frameUrl"] = v.frameUrl; 
  }
  void from_json(const json& j, RsoAuthDeviceId& v) {
  v.collectorServerName = j.at("collectorServerName").get<std::string>(); 
  v.sessionId = j.at("sessionId").get<std::string>(); 
  v.installId = j.at("installId").get<std::string>(); 
  v.merchantId = j.at("merchantId").get<std::string>(); 
  v.frameUrl = j.at("frameUrl").get<std::string>(); 
  }
}