#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolChampionsCollectionsOwnership.hpp>"

namespace leagueapi {
  struct LolChampionsCollectionsChampionSkinMinimal { /**/ 
    bool lastSelected;/**/
    int32_t id;/**/
    std::string splashPath;/**/
    std::string name;/**/
    bool isBase;/**/
    LolChampionsCollectionsOwnership ownership;/**/
    std::string tilePath;/**/
    bool stillObtainable;/**/
    bool disabled;/**/
    int32_t championId;/**/
    std::optional<std::string> chromaPath;/**/
  };
  static void to_json(json& j, const LolChampionsCollectionsChampionSkinMinimal& v) { 
    j["lastSelected"] = v.lastSelected;
    j["id"] = v.id;
    j["splashPath"] = v.splashPath;
    j["name"] = v.name;
    j["isBase"] = v.isBase;
    j["ownership"] = v.ownership;
    j["tilePath"] = v.tilePath;
    j["stillObtainable"] = v.stillObtainable;
    j["disabled"] = v.disabled;
    j["championId"] = v.championId;
    j["chromaPath"] = v.chromaPath;
  }
  static void from_json(const json& j, LolChampionsCollectionsChampionSkinMinimal& v) { 
    v.lastSelected = j.at("lastSelected").get<bool>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.splashPath = j.at("splashPath").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.isBase = j.at("isBase").get<bool>(); 
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership>(); 
    v.tilePath = j.at("tilePath").get<std::string>(); 
    v.stillObtainable = j.at("stillObtainable").get<bool>(); 
    v.disabled = j.at("disabled").get<bool>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.chromaPath = j.at("chromaPath").get<std::optional<std::string>>(); 
  }
} 