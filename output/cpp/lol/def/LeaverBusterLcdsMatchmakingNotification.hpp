#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LeaverBusterLcdsMatchmakingNotification { 
    std::vector<json> playerJoinFailures; 
  };
  inline void to_json(json& j, const LeaverBusterLcdsMatchmakingNotification& v) {
    j["playerJoinFailures"] = v.playerJoinFailures; 
  }
  inline void from_json(const json& j, LeaverBusterLcdsMatchmakingNotification& v) {
    v.playerJoinFailures = j.at("playerJoinFailures").get<std::vector<json>>(); 
  }
}