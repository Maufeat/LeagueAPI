#pragma once
#include "../base_def.hpp" 
#include "LolChampionsCollectionsChampionSkinEmblemPath.hpp"
#include "LolChampionsCollectionsChampionSkinEmblemPosition.hpp"
namespace lol {
  struct LolChampionsCollectionsChampionSkinEmblem { 
    LolChampionsCollectionsChampionSkinEmblemPosition positions;
    LolChampionsCollectionsChampionSkinEmblemPath emblemPath;
    std::string name; 
  };
  inline void to_json(json& j, const LolChampionsCollectionsChampionSkinEmblem& v) {
    j["positions"] = v.positions; 
    j["emblemPath"] = v.emblemPath; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, LolChampionsCollectionsChampionSkinEmblem& v) {
    v.positions = j.at("positions").get<LolChampionsCollectionsChampionSkinEmblemPosition>(); 
    v.emblemPath = j.at("emblemPath").get<LolChampionsCollectionsChampionSkinEmblemPath>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}