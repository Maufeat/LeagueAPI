#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/RankedScoutingTopChampionDTO.hpp>

namespace leagueapi {
  struct RankedScoutingMemberDTO { /**/ 
    uint64_t playerId;/**/
    std::vector<RankedScoutingTopChampionDTO> championScoutingData;/**/
  };
  static void to_json(json& j, const RankedScoutingMemberDTO& v) { 
    j["playerId"] = v.playerId;
    j["championScoutingData"] = v.championScoutingData;
  }
  static void from_json(const json& j, RankedScoutingMemberDTO& v) { 
    v.playerId = j.at("playerId").get<uint64_t>(); 
    v.championScoutingData = j.at("championScoutingData").get<std::vector<RankedScoutingTopChampionDTO>>(); 
  }
} 