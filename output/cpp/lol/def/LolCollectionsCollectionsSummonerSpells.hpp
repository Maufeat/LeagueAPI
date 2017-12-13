#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolCollectionsCollectionsSummonerSpells { 
    std::vector<uint64_t> spells;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LolCollectionsCollectionsSummonerSpells& v) {
    j["spells"] = v.spells; 
    j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LolCollectionsCollectionsSummonerSpells& v) {
    v.spells = j.at("spells").get<std::vector<uint64_t>>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}