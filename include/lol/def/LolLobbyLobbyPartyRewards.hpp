#pragma once
#include "../base_def.hpp" 
#include "LolLobbyPartyReward.hpp"
namespace lol {
  struct LolLobbyLobbyPartyRewards { 
    std::vector<LolLobbyPartyReward> partyRewards;
    bool isCustom;
    bool isEnabled;
    int32_t queueId; 
  };
  inline void to_json(json& j, const LolLobbyLobbyPartyRewards& v) {
    j["partyRewards"] = v.partyRewards; 
    j["isCustom"] = v.isCustom; 
    j["isEnabled"] = v.isEnabled; 
    j["queueId"] = v.queueId; 
  }
  inline void from_json(const json& j, LolLobbyLobbyPartyRewards& v) {
    v.partyRewards = j.at("partyRewards").get<std::vector<LolLobbyPartyReward>>(); 
    v.isCustom = j.at("isCustom").get<bool>(); 
    v.isEnabled = j.at("isEnabled").get<bool>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
  }
}