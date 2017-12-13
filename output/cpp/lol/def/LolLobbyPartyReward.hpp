#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyLobbyPartyRewardType.hpp>
namespace lol {
  struct LolLobbyPartyReward { 
    LolLobbyLobbyPartyRewardType type;
    int32_t premadeSize;
    std::string value; 
  };
  void to_json(json& j, const LolLobbyPartyReward& v) {
  j["type"] = v.type; 
  j["premadeSize"] = v.premadeSize; 
  j["value"] = v.value; 
  }
  void from_json(const json& j, LolLobbyPartyReward& v) {
  v.type = j.at("type").get<LolLobbyLobbyPartyRewardType>(); 
  v.premadeSize = j.at("premadeSize").get<int32_t>(); 
  v.value = j.at("value").get<std::string>(); 
  }
}