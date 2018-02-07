#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolCollectionsCollectionsSummonerIcons { 
    uint64_t summonerId;
    std::vector<int32_t> icons; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsSummonerIcons& v) {
    j["summonerId"] = v.summonerId; 
    j["icons"] = v.icons; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsSummonerIcons& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.icons = j.at("icons").get<std::vector<int32_t>>(); 
  }
}