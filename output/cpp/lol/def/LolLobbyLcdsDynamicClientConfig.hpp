#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyLcdsPartyRewardsConfig.hpp>
namespace lol {
  struct LolLobbyLcdsDynamicClientConfig { 
    LolLobbyLcdsPartyRewardsConfig PartyRewards; 
  };
  void to_json(json& j, const LolLobbyLcdsDynamicClientConfig& v) {
  j["PartyRewards"] = v.PartyRewards; 
  }
  void from_json(const json& j, LolLobbyLcdsDynamicClientConfig& v) {
  v.PartyRewards = j.at("PartyRewards").get<LolLobbyLcdsPartyRewardsConfig>(); 
  }
}