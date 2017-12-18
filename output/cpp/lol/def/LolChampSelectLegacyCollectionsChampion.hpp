#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChampSelectLegacyCollectionsOwnership.hpp>
namespace lol {
  struct LolChampSelectLegacyCollectionsChampion { 
    LolChampSelectLegacyCollectionsOwnership ownership;
    bool freeToPlay;
    int32_t id; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyCollectionsChampion& v) {
    j["ownership"] = v.ownership; 
    j["freeToPlay"] = v.freeToPlay; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyCollectionsChampion& v) {
    v.ownership = j.at("ownership").get<LolChampSelectLegacyCollectionsOwnership>(); 
    v.freeToPlay = j.at("freeToPlay").get<bool>(); 
    v.id = j.at("id").get<int32_t>(); 
  }
}