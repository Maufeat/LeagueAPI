#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolLootCollectionsOwnership.hpp>

namespace leagueapi {
  struct LolLootCollectionsWardSkin { /**/ 
    LolLootCollectionsOwnership ownership;/**/
    std::string wardShadowImagePath;/**/
    int64_t id;/**/
    std::string wardImagePath;/**/
    std::string name;/**/
  };
  static void to_json(json& j, const LolLootCollectionsWardSkin& v) { 
    j["ownership"] = v.ownership;
    j["wardShadowImagePath"] = v.wardShadowImagePath;
    j["id"] = v.id;
    j["wardImagePath"] = v.wardImagePath;
    j["name"] = v.name;
  }
  static void from_json(const json& j, LolLootCollectionsWardSkin& v) { 
    v.ownership = j.at("ownership").get<LolLootCollectionsOwnership>(); 
    v.wardShadowImagePath = j.at("wardShadowImagePath").get<std::string>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.wardImagePath = j.at("wardImagePath").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
  }
} 