#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLcdsPartyRewardsConfig.hpp"
namespace lol {
  struct LolLobbyLcdsDynamicClientConfig { 
    LolLobbyLcdsPartyRewardsConfig PartyRewards; 
  };
  inline void to_json(json& j, const LolLobbyLcdsDynamicClientConfig& v) {
    j["PartyRewards"] = v.PartyRewards; 
  }
  inline void from_json(const json& j, LolLobbyLcdsDynamicClientConfig& v) {
    v.PartyRewards = j.at("PartyRewards").get<LolLobbyLcdsPartyRewardsConfig>(); 
  }
}