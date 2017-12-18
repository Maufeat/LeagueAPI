#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct MissionAlertDTO { 
    int64_t alertTime;
    std::string type;
    std::string message; 
  };
  inline void to_json(json& j, const MissionAlertDTO& v) {
    j["alertTime"] = v.alertTime; 
    j["type"] = v.type; 
    j["message"] = v.message; 
  }
  inline void from_json(const json& j, MissionAlertDTO& v) {
    v.alertTime = j.at("alertTime").get<int64_t>(); 
    v.type = j.at("type").get<std::string>(); 
    v.message = j.at("message").get<std::string>(); 
  }
}