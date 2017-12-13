#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LeaverBusterLcdsMatchmakingNotification { 
    std::vector<json> playerJoinFailures; 
  };
  void to_json(json& j, const LeaverBusterLcdsMatchmakingNotification& v) {
    j["playerJoinFailures"] = v.playerJoinFailures; 
  }
  void from_json(const json& j, LeaverBusterLcdsMatchmakingNotification& v) {
    v.playerJoinFailures = j.at("playerJoinFailures").get<std::vector<json>>(); 
  }
}