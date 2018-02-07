#pragma once
#include "../base_def.hpp" 
#include "LolLobbyPartyReward.hpp"
namespace lol {
  struct LolLobbyLobbyPartyRewards { 
    bool isEnabled;
    int32_t queueId;
    bool isCustom;
    std::vector<LolLobbyPartyReward> partyRewards; 
  };
  inline void to_json(json& j, const LolLobbyLobbyPartyRewards& v) {
    j["isEnabled"] = v.isEnabled; 
    j["queueId"] = v.queueId; 
    j["isCustom"] = v.isCustom; 
    j["partyRewards"] = v.partyRewards; 
  }
  inline void from_json(const json& j, LolLobbyLobbyPartyRewards& v) {
    v.isEnabled = j.at("isEnabled").get<bool>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.isCustom = j.at("isCustom").get<bool>(); 
    v.partyRewards = j.at("partyRewards").get<std::vector<LolLobbyPartyReward>>(); 
  }
}