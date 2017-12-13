#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct BroadcastNotification { 
    std::vector<json> broadcastMessages; 
  };
  void to_json(json& j, const BroadcastNotification& v) {
  j["broadcastMessages"] = v.broadcastMessages; 
  }
  void from_json(const json& j, BroadcastNotification& v) {
  v.broadcastMessages = j.at("broadcastMessages").get<std::vector<json>>(); 
  }
}