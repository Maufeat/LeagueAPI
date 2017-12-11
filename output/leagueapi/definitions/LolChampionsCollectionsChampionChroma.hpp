#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolChampionsCollectionsOwnership.hpp>"

namespace leagueapi {
  struct LolChampionsCollectionsChampionChroma { /**/ 
    bool lastSelected;/**/
    std::vector<std::string> colors;/**/
    int32_t id;/**/
    std::string name;/**/
    LolChampionsCollectionsOwnership ownership;/**/
    bool stillObtainable;/**/
    bool disabled;/**/
    int32_t championId;/**/
    std::optional<std::string> chromaPath;/**/
  };
  static void to_json(json& j, const LolChampionsCollectionsChampionChroma& v) { 
    j["lastSelected"] = v.lastSelected;
    j["colors"] = v.colors;
    j["id"] = v.id;
    j["name"] = v.name;
    j["ownership"] = v.ownership;
    j["stillObtainable"] = v.stillObtainable;
    j["disabled"] = v.disabled;
    j["championId"] = v.championId;
    j["chromaPath"] = v.chromaPath;
  }
  static void from_json(const json& j, LolChampionsCollectionsChampionChroma& v) { 
    v.lastSelected = j.at("lastSelected").get<bool>(); 
    v.colors = j.at("colors").get<std::vector<std::string>>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership>(); 
    v.stillObtainable = j.at("stillObtainable").get<bool>(); 
    v.disabled = j.at("disabled").get<bool>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.chromaPath = j.at("chromaPath").get<std::optional<std::string>>(); 
  }
} 