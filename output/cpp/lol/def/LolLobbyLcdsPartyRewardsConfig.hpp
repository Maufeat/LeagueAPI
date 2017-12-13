#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyLcdsPartyRewardsConfig { 
    bool Enabled; 
  };
  void to_json(json& j, const LolLobbyLcdsPartyRewardsConfig& v) {
    j["Enabled"] = v.Enabled; 
  }
  void from_json(const json& j, LolLobbyLcdsPartyRewardsConfig& v) {
    v.Enabled = j.at("Enabled").get<bool>(); 
  }
}