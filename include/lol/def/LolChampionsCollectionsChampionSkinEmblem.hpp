#pragma once
#include "../base_def.hpp" 
#include "LolChampionsCollectionsChampionSkinEmblemPosition.hpp"
#include "LolChampionsCollectionsChampionSkinEmblemPath.hpp"
namespace lol {
  struct LolChampionsCollectionsChampionSkinEmblem { 
    std::string name;
    LolChampionsCollectionsChampionSkinEmblemPath emblemPath;
    LolChampionsCollectionsChampionSkinEmblemPosition positions; 
  };
  inline void to_json(json& j, const LolChampionsCollectionsChampionSkinEmblem& v) {
    j["name"] = v.name; 
    j["emblemPath"] = v.emblemPath; 
    j["positions"] = v.positions; 
  }
  inline void from_json(const json& j, LolChampionsCollectionsChampionSkinEmblem& v) {
    v.name = j.at("name").get<std::string>(); 
    v.emblemPath = j.at("emblemPath").get<LolChampionsCollectionsChampionSkinEmblemPath>(); 
    v.positions = j.at("positions").get<LolChampionsCollectionsChampionSkinEmblemPosition>(); 
  }
}