#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersLobbyStatus { /**/ 
    int32_t queueId;/**/
    std::vector<uint64_t> invitedSummonerIds;/**/
    std::vector<uint64_t> memberSummonerIds;/**/
  };
  static void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersLobbyStatus& v) { 
    j["queueId"] = v.queueId;
    j["invitedSummonerIds"] = v.invitedSummonerIds;
    j["memberSummonerIds"] = v.memberSummonerIds;
  }
  static void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersLobbyStatus& v) { 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.invitedSummonerIds = j.at("invitedSummonerIds").get<std::vector<uint64_t>>(); 
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>(); 
  }
} 