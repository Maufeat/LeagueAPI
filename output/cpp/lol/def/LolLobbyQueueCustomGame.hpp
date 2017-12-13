#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyQueueAvailability.hpp>
namespace lol {
  struct LolLobbyQueueCustomGame { 
    LolLobbyQueueAvailability queueAvailability; 
  };
  void to_json(json& j, const LolLobbyQueueCustomGame& v) {
    j["queueAvailability"] = v.queueAvailability; 
  }
  void from_json(const json& j, LolLobbyQueueCustomGame& v) {
    v.queueAvailability = j.at("queueAvailability").get<LolLobbyQueueAvailability>(); 
  }
}