#pragma once
#include "../base_def.hpp" 
#include "LolLootCollectionsOwnership.hpp"
namespace lol {
  struct LolLootCollectionsChampionSkinMinimal { 
    int32_t championId;
    int32_t id;
    std::string name;
    LolLootCollectionsOwnership ownership;
    std::string splashPath;
    std::string tilePath; 
  };
  inline void to_json(json& j, const LolLootCollectionsChampionSkinMinimal& v) {
    j["championId"] = v.championId; 
    j["id"] = v.id; 
    j["name"] = v.name; 
    j["ownership"] = v.ownership; 
    j["splashPath"] = v.splashPath; 
    j["tilePath"] = v.tilePath; 
  }
  inline void from_json(const json& j, LolLootCollectionsChampionSkinMinimal& v) {
    v.championId = j.at("championId").get<int32_t>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.ownership = j.at("ownership").get<LolLootCollectionsOwnership>(); 
    v.splashPath = j.at("splashPath").get<std::string>(); 
    v.tilePath = j.at("tilePath").get<std::string>(); 
  }
}