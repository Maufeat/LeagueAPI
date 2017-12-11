#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyTeamBuilderBackwardsTransitionInfoV1 { /**/ 
    std::vector<uint64_t> initiatorSummonerIds;/**/
    std::string backwardsTransitionReason;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderBackwardsTransitionInfoV1& v) { 
    j["initiatorSummonerIds"] = v.initiatorSummonerIds;
    j["backwardsTransitionReason"] = v.backwardsTransitionReason;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderBackwardsTransitionInfoV1& v) { 
    v.initiatorSummonerIds = j.at("initiatorSummonerIds").get<std::vector<uint64_t>>(); 
    v.backwardsTransitionReason = j.at("backwardsTransitionReason").get<std::string>(); 
  }
} 