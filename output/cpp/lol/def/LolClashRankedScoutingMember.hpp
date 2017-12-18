#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClashRankedScoutingTopChampion.hpp>
namespace lol {
  struct LolClashRankedScoutingMember { 
    std::vector<LolClashRankedScoutingTopChampion> championScoutingData;
    uint64_t playerId; 
  };
  inline void to_json(json& j, const LolClashRankedScoutingMember& v) {
    j["championScoutingData"] = v.championScoutingData; 
    j["playerId"] = v.playerId; 
  }
  inline void from_json(const json& j, LolClashRankedScoutingMember& v) {
    v.championScoutingData = j.at("championScoutingData").get<std::vector<LolClashRankedScoutingTopChampion>>(); 
    v.playerId = j.at("playerId").get<uint64_t>(); 
  }
}