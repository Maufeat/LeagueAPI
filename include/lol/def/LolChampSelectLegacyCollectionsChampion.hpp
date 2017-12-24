#pragma once
#include "../base_def.hpp" 
#include "LolChampSelectLegacyCollectionsOwnership.hpp"
namespace lol {
  struct LolChampSelectLegacyCollectionsChampion { 
    int32_t id;
    bool freeToPlay;
    LolChampSelectLegacyCollectionsOwnership ownership; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyCollectionsChampion& v) {
    j["id"] = v.id; 
    j["freeToPlay"] = v.freeToPlay; 
    j["ownership"] = v.ownership; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyCollectionsChampion& v) {
    v.id = j.at("id").get<int32_t>(); 
    v.freeToPlay = j.at("freeToPlay").get<bool>(); 
    v.ownership = j.at("ownership").get<LolChampSelectLegacyCollectionsOwnership>(); 
  }
}