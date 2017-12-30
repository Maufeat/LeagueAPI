#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyPartyRewardType.hpp"
namespace lol {
  struct LolLobbyPartyReward { 
    std::string value;
    int32_t premadeSize;
    LolLobbyLobbyPartyRewardType type; 
  };
  inline void to_json(json& j, const LolLobbyPartyReward& v) {
    j["value"] = v.value; 
    j["premadeSize"] = v.premadeSize; 
    j["type"] = v.type; 
  }
  inline void from_json(const json& j, LolLobbyPartyReward& v) {
    v.value = j.at("value").get<std::string>(); 
    v.premadeSize = j.at("premadeSize").get<int32_t>(); 
    v.type = j.at("type").get<LolLobbyLobbyPartyRewardType>(); 
  }
}