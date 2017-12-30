#pragma once
#include "../base_def.hpp" 
#include "LolChampSelectLegacyCollectionsOwnership.hpp"
namespace lol {
  struct LolChampSelectLegacyCollectionsChampion { 
    bool freeToPlay;
    int32_t id;
    LolChampSelectLegacyCollectionsOwnership ownership; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyCollectionsChampion& v) {
    j["freeToPlay"] = v.freeToPlay; 
    j["id"] = v.id; 
    j["ownership"] = v.ownership; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyCollectionsChampion& v) {
    v.freeToPlay = j.at("freeToPlay").get<bool>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.ownership = j.at("ownership").get<LolChampSelectLegacyCollectionsOwnership>(); 
  }
}