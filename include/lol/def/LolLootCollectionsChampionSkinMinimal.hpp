#pragma once
#include "../base_def.hpp" 
#include "LolLootCollectionsOwnership.hpp"
namespace lol {
  struct LolLootCollectionsChampionSkinMinimal { 
    std::string name;
    int32_t id;
    std::string splashPath;
    std::string tilePath;
    LolLootCollectionsOwnership ownership;
    int32_t championId; 
  };
  inline void to_json(json& j, const LolLootCollectionsChampionSkinMinimal& v) {
    j["name"] = v.name; 
    j["id"] = v.id; 
    j["splashPath"] = v.splashPath; 
    j["tilePath"] = v.tilePath; 
    j["ownership"] = v.ownership; 
    j["championId"] = v.championId; 
  }
  inline void from_json(const json& j, LolLootCollectionsChampionSkinMinimal& v) {
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.splashPath = j.at("splashPath").get<std::string>(); 
    v.tilePath = j.at("tilePath").get<std::string>(); 
    v.ownership = j.at("ownership").get<LolLootCollectionsOwnership>(); 
    v.championId = j.at("championId").get<int32_t>(); 
  }
}