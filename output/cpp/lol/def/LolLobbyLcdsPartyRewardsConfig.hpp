#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyLcdsPartyRewardsConfig { 
    bool Enabled; 
  };
  inline void to_json(json& j, const LolLobbyLcdsPartyRewardsConfig& v) {
    j["Enabled"] = v.Enabled; 
  }
  inline void from_json(const json& j, LolLobbyLcdsPartyRewardsConfig& v) {
    v.Enabled = j.at("Enabled").get<bool>(); 
  }
}