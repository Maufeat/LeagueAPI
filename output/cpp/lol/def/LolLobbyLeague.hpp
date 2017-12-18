#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyLeague { 
    std::string leagueTier;
    std::string queueType; 
  };
  inline void to_json(json& j, const LolLobbyLeague& v) {
    j["leagueTier"] = v.leagueTier; 
    j["queueType"] = v.queueType; 
  }
  inline void from_json(const json& j, LolLobbyLeague& v) {
    v.leagueTier = j.at("leagueTier").get<std::string>(); 
    v.queueType = j.at("queueType").get<std::string>(); 
  }
}