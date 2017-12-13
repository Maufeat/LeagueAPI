#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLootCollectionsOwnership.hpp>
namespace lol {
  struct LolLootCollectionsWardSkin { 
    LolLootCollectionsOwnership ownership;
    std::string name;
    std::string wardShadowImagePath;
    std::string wardImagePath;
    int64_t id; 
  };
  void to_json(json& j, const LolLootCollectionsWardSkin& v) {
  j["ownership"] = v.ownership; 
  j["name"] = v.name; 
  j["wardShadowImagePath"] = v.wardShadowImagePath; 
  j["wardImagePath"] = v.wardImagePath; 
  j["id"] = v.id; 
  }
  void from_json(const json& j, LolLootCollectionsWardSkin& v) {
  v.ownership = j.at("ownership").get<LolLootCollectionsOwnership>(); 
  v.name = j.at("name").get<std::string>(); 
  v.wardShadowImagePath = j.at("wardShadowImagePath").get<std::string>(); 
  v.wardImagePath = j.at("wardImagePath").get<std::string>(); 
  v.id = j.at("id").get<int64_t>(); 
  }
}