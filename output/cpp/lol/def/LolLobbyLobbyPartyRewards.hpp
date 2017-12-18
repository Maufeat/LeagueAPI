#pragma once
#include "../base_def.hpp" 
#include "LolLobbyPartyReward.hpp"
namespace lol {
  struct LolLobbyLobbyPartyRewards { 
    bool isEnabled;
    bool isCustom;
    int32_t queueId;
    std::vector<LolLobbyPartyReward> partyRewards; 
  };
  inline void to_json(json& j, const LolLobbyLobbyPartyRewards& v) {
    j["isEnabled"] = v.isEnabled; 
    j["isCustom"] = v.isCustom; 
    j["queueId"] = v.queueId; 
    j["partyRewards"] = v.partyRewards; 
  }
  inline void from_json(const json& j, LolLobbyLobbyPartyRewards& v) {
    v.isEnabled = j.at("isEnabled").get<bool>(); 
    v.isCustom = j.at("isCustom").get<bool>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.partyRewards = j.at("partyRewards").get<std::vector<LolLobbyPartyReward>>(); 
  }
}