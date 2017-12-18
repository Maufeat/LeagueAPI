#pragma once
#include "../base_def.hpp" 
#include "LolCollectionsCollectionsChampionMastery.hpp"
namespace lol {
  struct LolCollectionsCollectionsTopChampionMasteries { 
    uint64_t score;
    std::vector<LolCollectionsCollectionsChampionMastery> masteries;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsTopChampionMasteries& v) {
    j["score"] = v.score; 
    j["masteries"] = v.masteries; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsTopChampionMasteries& v) {
    v.score = j.at("score").get<uint64_t>(); 
    v.masteries = j.at("masteries").get<std::vector<LolCollectionsCollectionsChampionMastery>>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}