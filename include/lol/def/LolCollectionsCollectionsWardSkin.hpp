#pragma once
#include "../base_def.hpp" 
#include "LolCollectionsCollectionsOwnership.hpp"
namespace lol {
  struct LolCollectionsCollectionsWardSkin { 
    std::string name;
    int64_t id;
    std::string wardShadowImagePath;
    std::string description;
    LolCollectionsCollectionsOwnership ownership;
    std::string wardImagePath; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsWardSkin& v) {
    j["name"] = v.name; 
    j["id"] = v.id; 
    j["wardShadowImagePath"] = v.wardShadowImagePath; 
    j["description"] = v.description; 
    j["ownership"] = v.ownership; 
    j["wardImagePath"] = v.wardImagePath; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsWardSkin& v) {
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.wardShadowImagePath = j.at("wardShadowImagePath").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.ownership = j.at("ownership").get<LolCollectionsCollectionsOwnership>(); 
    v.wardImagePath = j.at("wardImagePath").get<std::string>(); 
  }
}