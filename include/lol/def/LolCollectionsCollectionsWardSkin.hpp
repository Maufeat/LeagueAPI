#pragma once
#include "../base_def.hpp" 
#include "LolCollectionsCollectionsOwnership.hpp"
namespace lol {
  struct LolCollectionsCollectionsWardSkin { 
    std::string description;
    std::string wardImagePath;
    std::string wardShadowImagePath;
    std::string name;
    int64_t id;
    LolCollectionsCollectionsOwnership ownership; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsWardSkin& v) {
    j["description"] = v.description; 
    j["wardImagePath"] = v.wardImagePath; 
    j["wardShadowImagePath"] = v.wardShadowImagePath; 
    j["name"] = v.name; 
    j["id"] = v.id; 
    j["ownership"] = v.ownership; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsWardSkin& v) {
    v.description = j.at("description").get<std::string>(); 
    v.wardImagePath = j.at("wardImagePath").get<std::string>(); 
    v.wardShadowImagePath = j.at("wardShadowImagePath").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.ownership = j.at("ownership").get<LolCollectionsCollectionsOwnership>(); 
  }
}