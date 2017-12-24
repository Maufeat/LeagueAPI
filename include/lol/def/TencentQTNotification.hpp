#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct TencentQTNotification { 
    std::string state;
    int64_t timestamp;
    json data;
    std::string updatedBy; 
  };
  inline void to_json(json& j, const TencentQTNotification& v) {
    j["state"] = v.state; 
    j["timestamp"] = v.timestamp; 
    j["data"] = v.data; 
    j["updatedBy"] = v.updatedBy; 
  }
  inline void from_json(const json& j, TencentQTNotification& v) {
    v.state = j.at("state").get<std::string>(); 
    v.timestamp = j.at("timestamp").get<int64_t>(); 
    v.data = j.at("data").get<json>(); 
    v.updatedBy = j.at("updatedBy").get<std::string>(); 
  }
}