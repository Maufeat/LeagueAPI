#pragma once
#include "../base_def.hpp" 
#include "LolLootCollectionsOwnership.hpp"
namespace lol {
  struct LolLootCollectionsWardSkin { 
    int64_t id;
    std::string name;
    LolLootCollectionsOwnership ownership;
    std::string wardImagePath;
    std::string wardShadowImagePath; 
  };
  inline void to_json(json& j, const LolLootCollectionsWardSkin& v) {
    j["id"] = v.id; 
    j["name"] = v.name; 
    j["ownership"] = v.ownership; 
    j["wardImagePath"] = v.wardImagePath; 
    j["wardShadowImagePath"] = v.wardShadowImagePath; 
  }
  inline void from_json(const json& j, LolLootCollectionsWardSkin& v) {
    v.id = j.at("id").get<int64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.ownership = j.at("ownership").get<LolLootCollectionsOwnership>(); 
    v.wardImagePath = j.at("wardImagePath").get<std::string>(); 
    v.wardShadowImagePath = j.at("wardShadowImagePath").get<std::string>(); 
  }
}