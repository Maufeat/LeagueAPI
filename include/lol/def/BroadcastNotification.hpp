#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct BroadcastNotification { 
    std::vector<json> broadcastMessages; 
  };
  inline void to_json(json& j, const BroadcastNotification& v) {
    j["broadcastMessages"] = v.broadcastMessages; 
  }
  inline void from_json(const json& j, BroadcastNotification& v) {
    v.broadcastMessages = j.at("broadcastMessages").get<std::vector<json>>(); 
  }
}