#pragma once
#include "../base_def.hpp" 
#include "LolLootCollectionsOwnership.hpp"
namespace lol {
  struct LolLootCollectionsWardSkin { 
    int64_t id;
    std::string wardImagePath;
    std::string wardShadowImagePath;
    LolLootCollectionsOwnership ownership;
    std::string name; 
  };
  inline void to_json(json& j, const LolLootCollectionsWardSkin& v) {
    j["id"] = v.id; 
    j["wardImagePath"] = v.wardImagePath; 
    j["wardShadowImagePath"] = v.wardShadowImagePath; 
    j["ownership"] = v.ownership; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, LolLootCollectionsWardSkin& v) {
    v.id = j.at("id").get<int64_t>(); 
    v.wardImagePath = j.at("wardImagePath").get<std::string>(); 
    v.wardShadowImagePath = j.at("wardShadowImagePath").get<std::string>(); 
    v.ownership = j.at("ownership").get<LolLootCollectionsOwnership>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}