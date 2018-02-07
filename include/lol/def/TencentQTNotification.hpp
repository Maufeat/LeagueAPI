#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct TencentQTNotification { 
    std::string state;
    std::string updatedBy;
    int64_t timestamp;
    json data; 
  };
  inline void to_json(json& j, const TencentQTNotification& v) {
    j["state"] = v.state; 
    j["updatedBy"] = v.updatedBy; 
    j["timestamp"] = v.timestamp; 
    j["data"] = v.data; 
  }
  inline void from_json(const json& j, TencentQTNotification& v) {
    v.state = j.at("state").get<std::string>(); 
    v.updatedBy = j.at("updatedBy").get<std::string>(); 
    v.timestamp = j.at("timestamp").get<int64_t>(); 
    v.data = j.at("data").get<json>(); 
  }
}