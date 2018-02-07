#pragma once
#include "../base_def.hpp" 
#include "LolCollectionsCollectionsChampionMastery.hpp"
namespace lol {
  struct LolCollectionsCollectionsTopChampionMasteries { 
    uint64_t summonerId;
    uint64_t score;
    std::vector<LolCollectionsCollectionsChampionMastery> masteries; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsTopChampionMasteries& v) {
    j["summonerId"] = v.summonerId; 
    j["score"] = v.score; 
    j["masteries"] = v.masteries; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsTopChampionMasteries& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.score = j.at("score").get<uint64_t>(); 
    v.masteries = j.at("masteries").get<std::vector<LolCollectionsCollectionsChampionMastery>>(); 
  }
}