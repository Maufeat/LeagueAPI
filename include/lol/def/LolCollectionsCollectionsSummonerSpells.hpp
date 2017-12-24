#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolCollectionsCollectionsSummonerSpells { 
    uint64_t summonerId;
    std::vector<uint64_t> spells; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsSummonerSpells& v) {
    j["summonerId"] = v.summonerId; 
    j["spells"] = v.spells; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsSummonerSpells& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.spells = j.at("spells").get<std::vector<uint64_t>>(); 
  }
}