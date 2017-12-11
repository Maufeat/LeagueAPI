#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct TencentQTNotification { /**/ 
    int64_t timestamp;/**/
    std::string state;/**/
    std::string updatedBy;/**/
    json data;/**/
  };
  static void to_json(json& j, const TencentQTNotification& v) { 
    j["timestamp"] = v.timestamp;
    j["state"] = v.state;
    j["updatedBy"] = v.updatedBy;
    j["data"] = v.data;
  }
  static void from_json(const json& j, TencentQTNotification& v) { 
    v.timestamp = j.at("timestamp").get<int64_t>(); 
    v.state = j.at("state").get<std::string>(); 
    v.updatedBy = j.at("updatedBy").get<std::string>(); 
    v.data = j.at("data").get<json>(); 
  }
} 