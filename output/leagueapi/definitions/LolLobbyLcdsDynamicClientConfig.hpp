#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLobbyLcdsPartyRewardsConfig.hpp>"

namespace leagueapi {
  struct LolLobbyLcdsDynamicClientConfig { /**/ 
    LolLobbyLcdsPartyRewardsConfig PartyRewards;/**/
  };
  static void to_json(json& j, const LolLobbyLcdsDynamicClientConfig& v) { 
    j["PartyRewards"] = v.PartyRewards;
  }
  static void from_json(const json& j, LolLobbyLcdsDynamicClientConfig& v) { 
    v.PartyRewards = j.at("PartyRewards").get<LolLobbyLcdsPartyRewardsConfig>(); 
  }
} 