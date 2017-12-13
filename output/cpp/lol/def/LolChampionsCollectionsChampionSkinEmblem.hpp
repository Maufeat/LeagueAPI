#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChampionsCollectionsChampionSkinEmblemPath.hpp>
#include <lol/def/LolChampionsCollectionsChampionSkinEmblemPosition.hpp>
namespace lol {
  struct LolChampionsCollectionsChampionSkinEmblem { 
    LolChampionsCollectionsChampionSkinEmblemPath emblemPath;
    LolChampionsCollectionsChampionSkinEmblemPosition positions;
    std::string name; 
  };
  void to_json(json& j, const LolChampionsCollectionsChampionSkinEmblem& v) {
    j["emblemPath"] = v.emblemPath; 
    j["positions"] = v.positions; 
    j["name"] = v.name; 
  }
  void from_json(const json& j, LolChampionsCollectionsChampionSkinEmblem& v) {
    v.emblemPath = j.at("emblemPath").get<LolChampionsCollectionsChampionSkinEmblemPath>(); 
    v.positions = j.at("positions").get<LolChampionsCollectionsChampionSkinEmblemPosition>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}