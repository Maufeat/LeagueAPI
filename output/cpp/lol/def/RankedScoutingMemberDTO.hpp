#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/RankedScoutingTopChampionDTO.hpp>
namespace lol {
  struct RankedScoutingMemberDTO { 
    std::vector<RankedScoutingTopChampionDTO> championScoutingData;
    uint64_t playerId; 
  };
  inline void to_json(json& j, const RankedScoutingMemberDTO& v) {
    j["championScoutingData"] = v.championScoutingData; 
    j["playerId"] = v.playerId; 
  }
  inline void from_json(const json& j, RankedScoutingMemberDTO& v) {
    v.championScoutingData = j.at("championScoutingData").get<std::vector<RankedScoutingTopChampionDTO>>(); 
    v.playerId = j.at("playerId").get<uint64_t>(); 
  }
}