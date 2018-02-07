#pragma once
#include "../base_def.hpp" 
#include "LolCollectionsCollectionsOwnership.hpp"
namespace lol {
  struct LolCollectionsCollectionsWardSkin { 
    int64_t id;
    std::string name;
    std::string description;
    LolCollectionsCollectionsOwnership ownership;
    std::string wardImagePath;
    std::string wardShadowImagePath; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsWardSkin& v) {
    j["id"] = v.id; 
    j["name"] = v.name; 
    j["description"] = v.description; 
    j["ownership"] = v.ownership; 
    j["wardImagePath"] = v.wardImagePath; 
    j["wardShadowImagePath"] = v.wardShadowImagePath; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsWardSkin& v) {
    v.id = j.at("id").get<int64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.ownership = j.at("ownership").get<LolCollectionsCollectionsOwnership>(); 
    v.wardImagePath = j.at("wardImagePath").get<std::string>(); 
    v.wardShadowImagePath = j.at("wardShadowImagePath").get<std::string>(); 
  }
}