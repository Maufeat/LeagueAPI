#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LCDSBroadcastNotification { 
    std::vector<json> broadcastMessages; 
  };
  inline void to_json(json& j, const LCDSBroadcastNotification& v) {
    j["broadcastMessages"] = v.broadcastMessages; 
  }
  inline void from_json(const json& j, LCDSBroadcastNotification& v) {
    v.broadcastMessages = j.at("broadcastMessages").get<std::vector<json>>(); 
  }
}