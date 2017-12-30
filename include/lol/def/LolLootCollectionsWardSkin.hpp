#pragma once
#include "../base_def.hpp" 
#include "LolLootCollectionsOwnership.hpp"
namespace lol {
  struct LolLootCollectionsWardSkin { 
    std::string name;
    int64_t id;
    std::string wardImagePath;
    LolLootCollectionsOwnership ownership;
    std::string wardShadowImagePath; 
  };
  inline void to_json(json& j, const LolLootCollectionsWardSkin& v) {
    j["name"] = v.name; 
    j["id"] = v.id; 
    j["wardImagePath"] = v.wardImagePath; 
    j["ownership"] = v.ownership; 
    j["wardShadowImagePath"] = v.wardShadowImagePath; 
  }
  inline void from_json(const json& j, LolLootCollectionsWardSkin& v) {
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.wardImagePath = j.at("wardImagePath").get<std::string>(); 
    v.ownership = j.at("ownership").get<LolLootCollectionsOwnership>(); 
    v.wardShadowImagePath = j.at("wardShadowImagePath").get<std::string>(); 
  }
}