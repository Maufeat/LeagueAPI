#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyPartyRewardType.hpp"
namespace lol {
  struct LolLobbyPartyReward { 
    int32_t premadeSize;
    LolLobbyLobbyPartyRewardType type;
    std::string value; 
  };
  inline void to_json(json& j, const LolLobbyPartyReward& v) {
    j["premadeSize"] = v.premadeSize; 
    j["type"] = v.type; 
    j["value"] = v.value; 
  }
  inline void from_json(const json& j, LolLobbyPartyReward& v) {
    v.premadeSize = j.at("premadeSize").get<int32_t>(); 
    v.type = j.at("type").get<LolLobbyLobbyPartyRewardType>(); 
    v.value = j.at("value").get<std::string>(); 
  }
}