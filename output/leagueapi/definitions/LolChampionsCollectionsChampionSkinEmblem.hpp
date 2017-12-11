#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolChampionsCollectionsChampionSkinEmblemPosition.hpp>"
#include "<leagueapi/definitions/LolChampionsCollectionsChampionSkinEmblemPath.hpp>"

namespace leagueapi {
  struct LolChampionsCollectionsChampionSkinEmblem { /**/ 
    LolChampionsCollectionsChampionSkinEmblemPosition positions;/**/
    LolChampionsCollectionsChampionSkinEmblemPath emblemPath;/**/
    std::string name;/**/
  };
  static void to_json(json& j, const LolChampionsCollectionsChampionSkinEmblem& v) { 
    j["positions"] = v.positions;
    j["emblemPath"] = v.emblemPath;
    j["name"] = v.name;
  }
  static void from_json(const json& j, LolChampionsCollectionsChampionSkinEmblem& v) { 
    v.positions = j.at("positions").get<LolChampionsCollectionsChampionSkinEmblemPosition>(); 
    v.emblemPath = j.at("emblemPath").get<LolChampionsCollectionsChampionSkinEmblemPath>(); 
    v.name = j.at("name").get<std::string>(); 
  }
} 