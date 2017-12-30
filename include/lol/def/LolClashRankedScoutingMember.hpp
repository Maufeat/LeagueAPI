#pragma once
#include "../base_def.hpp" 
#include "LolClashRankedScoutingTopChampion.hpp"
namespace lol {
  struct LolClashRankedScoutingMember { 
    uint64_t playerId;
    std::vector<LolClashRankedScoutingTopChampion> championScoutingData; 
  };
  inline void to_json(json& j, const LolClashRankedScoutingMember& v) {
    j["playerId"] = v.playerId; 
    j["championScoutingData"] = v.championScoutingData; 
  }
  inline void from_json(const json& j, LolClashRankedScoutingMember& v) {
    v.playerId = j.at("playerId").get<uint64_t>(); 
    v.championScoutingData = j.at("championScoutingData").get<std::vector<LolClashRankedScoutingTopChampion>>(); 
  }
}