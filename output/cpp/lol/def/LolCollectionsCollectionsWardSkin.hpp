#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolCollectionsCollectionsOwnership.hpp>
namespace lol {
  struct LolCollectionsCollectionsWardSkin { 
    std::string wardImagePath;
    LolCollectionsCollectionsOwnership ownership;
    std::string description;
    std::string name;
    std::string wardShadowImagePath;
    int64_t id; 
  };
  void to_json(json& j, const LolCollectionsCollectionsWardSkin& v) {
  j["wardImagePath"] = v.wardImagePath; 
  j["ownership"] = v.ownership; 
  j["description"] = v.description; 
  j["name"] = v.name; 
  j["wardShadowImagePath"] = v.wardShadowImagePath; 
  j["id"] = v.id; 
  }
  void from_json(const json& j, LolCollectionsCollectionsWardSkin& v) {
  v.wardImagePath = j.at("wardImagePath").get<std::string>(); 
  v.ownership = j.at("ownership").get<LolCollectionsCollectionsOwnership>(); 
  v.description = j.at("description").get<std::string>(); 
  v.name = j.at("name").get<std::string>(); 
  v.wardShadowImagePath = j.at("wardShadowImagePath").get<std::string>(); 
  v.id = j.at("id").get<int64_t>(); 
  }
}