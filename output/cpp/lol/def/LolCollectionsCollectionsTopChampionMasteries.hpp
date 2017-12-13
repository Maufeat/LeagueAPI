#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolCollectionsCollectionsChampionMastery.hpp>
namespace lol {
  struct LolCollectionsCollectionsTopChampionMasteries { 
    uint64_t summonerId;
    std::vector<LolCollectionsCollectionsChampionMastery> masteries;
    uint64_t score; 
  };
  void to_json(json& j, const LolCollectionsCollectionsTopChampionMasteries& v) {
  j["summonerId"] = v.summonerId; 
  j["masteries"] = v.masteries; 
  j["score"] = v.score; 
  }
  void from_json(const json& j, LolCollectionsCollectionsTopChampionMasteries& v) {
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.masteries = j.at("masteries").get<std::vector<LolCollectionsCollectionsChampionMastery>>(); 
  v.score = j.at("score").get<uint64_t>(); 
  }
}