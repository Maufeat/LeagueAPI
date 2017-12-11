#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolClashRankedScoutingTopChampion.hpp>

namespace leagueapi {
  struct LolClashRankedScoutingMember { /**/ 
    uint64_t playerId;/**/
    std::vector<LolClashRankedScoutingTopChampion> championScoutingData;/**/
  };
  static void to_json(json& j, const LolClashRankedScoutingMember& v) { 
    j["playerId"] = v.playerId;
    j["championScoutingData"] = v.championScoutingData;
  }
  static void from_json(const json& j, LolClashRankedScoutingMember& v) { 
    v.playerId = j.at("playerId").get<uint64_t>(); 
    v.championScoutingData = j.at("championScoutingData").get<std::vector<LolClashRankedScoutingTopChampion>>(); 
  }
} 