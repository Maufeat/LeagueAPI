#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/RankedScoutingTopChampionDTO.hpp>
namespace lol {
  struct RankedScoutingMemberDTO { 
    uint64_t playerId;
    std::vector<RankedScoutingTopChampionDTO> championScoutingData; 
  };
  void to_json(json& j, const RankedScoutingMemberDTO& v) {
  j["playerId"] = v.playerId; 
  j["championScoutingData"] = v.championScoutingData; 
  }
  void from_json(const json& j, RankedScoutingMemberDTO& v) {
  v.playerId = j.at("playerId").get<uint64_t>(); 
  v.championScoutingData = j.at("championScoutingData").get<std::vector<RankedScoutingTopChampionDTO>>(); 
  }
}