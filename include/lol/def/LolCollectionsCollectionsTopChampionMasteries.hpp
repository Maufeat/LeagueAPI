#pragma once
#include "../base_def.hpp" 
#include "LolCollectionsCollectionsChampionMastery.hpp"
namespace lol {
  struct LolCollectionsCollectionsTopChampionMasteries { 
    std::vector<LolCollectionsCollectionsChampionMastery> masteries;
    uint64_t summonerId;
    uint64_t score; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsTopChampionMasteries& v) {
    j["masteries"] = v.masteries; 
    j["summonerId"] = v.summonerId; 
    j["score"] = v.score; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsTopChampionMasteries& v) {
    v.masteries = j.at("masteries").get<std::vector<LolCollectionsCollectionsChampionMastery>>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.score = j.at("score").get<uint64_t>(); 
  }
}