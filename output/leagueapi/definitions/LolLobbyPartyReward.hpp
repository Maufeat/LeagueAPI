#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLobbyLobbyPartyRewardType.hpp>"

namespace leagueapi {
  struct LolLobbyPartyReward { /**/ 
    LolLobbyLobbyPartyRewardType type;/**/
    int32_t premadeSize;/**/
    std::string value;/**/
  };
  static void to_json(json& j, const LolLobbyPartyReward& v) { 
    j["type"] = v.type;
    j["premadeSize"] = v.premadeSize;
    j["value"] = v.value;
  }
  static void from_json(const json& j, LolLobbyPartyReward& v) { 
    v.type = j.at("type").get<LolLobbyLobbyPartyRewardType>(); 
    v.premadeSize = j.at("premadeSize").get<int32_t>(); 
    v.value = j.at("value").get<std::string>(); 
  }
} 