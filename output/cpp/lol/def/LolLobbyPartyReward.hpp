#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyLobbyPartyRewardType.hpp>
namespace lol {
  struct LolLobbyPartyReward { 
    LolLobbyLobbyPartyRewardType type;
    std::string value;
    int32_t premadeSize; 
  };
  void to_json(json& j, const LolLobbyPartyReward& v) {
    j["type"] = v.type; 
    j["value"] = v.value; 
    j["premadeSize"] = v.premadeSize; 
  }
  void from_json(const json& j, LolLobbyPartyReward& v) {
    v.type = j.at("type").get<LolLobbyLobbyPartyRewardType>(); 
    v.value = j.at("value").get<std::string>(); 
    v.premadeSize = j.at("premadeSize").get<int32_t>(); 
  }
}