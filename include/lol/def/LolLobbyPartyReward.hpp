#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyPartyRewardType.hpp"
namespace lol {
  struct LolLobbyPartyReward { 
    LolLobbyLobbyPartyRewardType type;
    std::string value;
    int32_t premadeSize; 
  };
  inline void to_json(json& j, const LolLobbyPartyReward& v) {
    j["type"] = v.type; 
    j["value"] = v.value; 
    j["premadeSize"] = v.premadeSize; 
  }
  inline void from_json(const json& j, LolLobbyPartyReward& v) {
    v.type = j.at("type").get<LolLobbyLobbyPartyRewardType>(); 
    v.value = j.at("value").get<std::string>(); 
    v.premadeSize = j.at("premadeSize").get<int32_t>(); 
  }
}