#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyLcdsPartyRewardsConfig { /**/ 
    bool Enabled;/**/
  };
  static void to_json(json& j, const LolLobbyLcdsPartyRewardsConfig& v) { 
    j["Enabled"] = v.Enabled;
  }
  static void from_json(const json& j, LolLobbyLcdsPartyRewardsConfig& v) { 
    v.Enabled = j.at("Enabled").get<bool>(); 
  }
} 