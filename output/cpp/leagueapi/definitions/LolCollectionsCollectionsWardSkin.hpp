#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolCollectionsCollectionsOwnership.hpp>

namespace leagueapi {
  struct LolCollectionsCollectionsWardSkin { /**/ 
    int64_t id;/**/
    std::string description;/**/
    LolCollectionsCollectionsOwnership ownership;/**/
    std::string name;/**/
    std::string wardImagePath;/**/
    std::string wardShadowImagePath;/**/
  };
  static void to_json(json& j, const LolCollectionsCollectionsWardSkin& v) { 
    j["id"] = v.id;
    j["description"] = v.description;
    j["ownership"] = v.ownership;
    j["name"] = v.name;
    j["wardImagePath"] = v.wardImagePath;
    j["wardShadowImagePath"] = v.wardShadowImagePath;
  }
  static void from_json(const json& j, LolCollectionsCollectionsWardSkin& v) { 
    v.id = j.at("id").get<int64_t>(); 
    v.description = j.at("description").get<std::string>(); 
    v.ownership = j.at("ownership").get<LolCollectionsCollectionsOwnership>(); 
    v.name = j.at("name").get<std::string>(); 
    v.wardImagePath = j.at("wardImagePath").get<std::string>(); 
    v.wardShadowImagePath = j.at("wardShadowImagePath").get<std::string>(); 
  }
} 