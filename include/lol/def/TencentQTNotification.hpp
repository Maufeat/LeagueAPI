#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct TencentQTNotification { 
    int64_t timestamp;
    json data;
    std::string updatedBy;
    std::string state; 
  };
  inline void to_json(json& j, const TencentQTNotification& v) {
    j["timestamp"] = v.timestamp; 
    j["data"] = v.data; 
    j["updatedBy"] = v.updatedBy; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, TencentQTNotification& v) {
    v.timestamp = j.at("timestamp").get<int64_t>(); 
    v.data = j.at("data").get<json>(); 
    v.updatedBy = j.at("updatedBy").get<std::string>(); 
    v.state = j.at("state").get<std::string>(); 
  }
}