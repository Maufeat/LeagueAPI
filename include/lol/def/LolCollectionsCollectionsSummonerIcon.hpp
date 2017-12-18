#pragma once
#include "../base_def.hpp" 
#include "LolCollectionsCollectionsOwnership.hpp"
namespace lol {
  struct LolCollectionsCollectionsSummonerIcon { 
    LolCollectionsCollectionsOwnership ownership;
    int32_t iconId; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsSummonerIcon& v) {
    j["ownership"] = v.ownership; 
    j["iconId"] = v.iconId; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsSummonerIcon& v) {
    v.ownership = j.at("ownership").get<LolCollectionsCollectionsOwnership>(); 
    v.iconId = j.at("iconId").get<int32_t>(); 
  }
}