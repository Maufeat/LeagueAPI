#pragma once
#include "../base_def.hpp" 
#include "RankedScoutingTopChampionDTO.hpp"
namespace lol {
  struct RankedScoutingMemberDTO { 
    uint64_t playerId;
    std::vector<RankedScoutingTopChampionDTO> championScoutingData; 
  };
  inline void to_json(json& j, const RankedScoutingMemberDTO& v) {
    j["playerId"] = v.playerId; 
    j["championScoutingData"] = v.championScoutingData; 
  }
  inline void from_json(const json& j, RankedScoutingMemberDTO& v) {
    v.playerId = j.at("playerId").get<uint64_t>(); 
    v.championScoutingData = j.at("championScoutingData").get<std::vector<RankedScoutingTopChampionDTO>>(); 
  }
}