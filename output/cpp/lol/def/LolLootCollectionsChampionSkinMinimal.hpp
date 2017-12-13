#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLootCollectionsOwnership.hpp>
namespace lol {
  struct LolLootCollectionsChampionSkinMinimal { 
    LolLootCollectionsOwnership ownership;
    std::string splashPath;
    std::string name;
    std::string tilePath;
    int32_t championId;
    int32_t id; 
  };
  void to_json(json& j, const LolLootCollectionsChampionSkinMinimal& v) {
  j["ownership"] = v.ownership; 
  j["splashPath"] = v.splashPath; 
  j["name"] = v.name; 
  j["tilePath"] = v.tilePath; 
  j["championId"] = v.championId; 
  j["id"] = v.id; 
  }
  void from_json(const json& j, LolLootCollectionsChampionSkinMinimal& v) {
  v.ownership = j.at("ownership").get<LolLootCollectionsOwnership>(); 
  v.splashPath = j.at("splashPath").get<std::string>(); 
  v.name = j.at("name").get<std::string>(); 
  v.tilePath = j.at("tilePath").get<std::string>(); 
  v.championId = j.at("championId").get<int32_t>(); 
  v.id = j.at("id").get<int32_t>(); 
  }
}