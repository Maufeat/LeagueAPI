#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolCollectionsCollectionsSummonerIcons { 
    std::vector<int32_t> icons;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LolCollectionsCollectionsSummonerIcons& v) {
    j["icons"] = v.icons; 
    j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LolCollectionsCollectionsSummonerIcons& v) {
    v.icons = j.at("icons").get<std::vector<int32_t>>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}