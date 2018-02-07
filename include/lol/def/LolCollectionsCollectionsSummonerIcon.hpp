#pragma once
#include "../base_def.hpp" 
#include "LolCollectionsCollectionsOwnership.hpp"
namespace lol {
  struct LolCollectionsCollectionsSummonerIcon { 
    int32_t iconId;
    LolCollectionsCollectionsOwnership ownership; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsSummonerIcon& v) {
    j["iconId"] = v.iconId; 
    j["ownership"] = v.ownership; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsSummonerIcon& v) {
    v.iconId = j.at("iconId").get<int32_t>(); 
    v.ownership = j.at("ownership").get<LolCollectionsCollectionsOwnership>(); 
  }
}