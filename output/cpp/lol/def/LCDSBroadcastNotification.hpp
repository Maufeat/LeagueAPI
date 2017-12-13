#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LCDSBroadcastNotification { 
    std::vector<json> broadcastMessages; 
  };
  void to_json(json& j, const LCDSBroadcastNotification& v) {
  j["broadcastMessages"] = v.broadcastMessages; 
  }
  void from_json(const json& j, LCDSBroadcastNotification& v) {
  v.broadcastMessages = j.at("broadcastMessages").get<std::vector<json>>(); 
  }
}