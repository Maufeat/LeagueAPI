#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLootCollectionsOwnership.hpp>"

namespace leagueapi {
  struct LolLootCollectionsChampionSkinMinimal { /**/ 
    int32_t id;/**/
    std::string splashPath;/**/
    std::string name;/**/
    std::string tilePath;/**/
    LolLootCollectionsOwnership ownership;/**/
    int32_t championId;/**/
  };
  static void to_json(json& j, const LolLootCollectionsChampionSkinMinimal& v) { 
    j["id"] = v.id;
    j["splashPath"] = v.splashPath;
    j["name"] = v.name;
    j["tilePath"] = v.tilePath;
    j["ownership"] = v.ownership;
    j["championId"] = v.championId;
  }
  static void from_json(const json& j, LolLootCollectionsChampionSkinMinimal& v) { 
    v.id = j.at("id").get<int32_t>(); 
    v.splashPath = j.at("splashPath").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.tilePath = j.at("tilePath").get<std::string>(); 
    v.ownership = j.at("ownership").get<LolLootCollectionsOwnership>(); 
    v.championId = j.at("championId").get<int32_t>(); 
  }
} 