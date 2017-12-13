#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChampionsCollectionsOwnership.hpp>
namespace lol {
  struct LolChampionsCollectionsChampionSkinMinimal { 
    bool lastSelected;
    bool isBase;
    std::optional<std::string> chromaPath;
    bool disabled;
    LolChampionsCollectionsOwnership ownership;
    bool stillObtainable;
    std::string name;
    std::string tilePath;
    std::string splashPath;
    int32_t championId;
    int32_t id; 
  };
  void to_json(json& j, const LolChampionsCollectionsChampionSkinMinimal& v) {
  j["lastSelected"] = v.lastSelected; 
  j["isBase"] = v.isBase; 
  j["chromaPath"] = v.chromaPath; 
  j["disabled"] = v.disabled; 
  j["ownership"] = v.ownership; 
  j["stillObtainable"] = v.stillObtainable; 
  j["name"] = v.name; 
  j["tilePath"] = v.tilePath; 
  j["splashPath"] = v.splashPath; 
  j["championId"] = v.championId; 
  j["id"] = v.id; 
  }
  void from_json(const json& j, LolChampionsCollectionsChampionSkinMinimal& v) {
  v.lastSelected = j.at("lastSelected").get<bool>(); 
  v.isBase = j.at("isBase").get<bool>(); 
  v.chromaPath = j.at("chromaPath").get<std::optional<std::string>>(); 
  v.disabled = j.at("disabled").get<bool>(); 
  v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership>(); 
  v.stillObtainable = j.at("stillObtainable").get<bool>(); 
  v.name = j.at("name").get<std::string>(); 
  v.tilePath = j.at("tilePath").get<std::string>(); 
  v.splashPath = j.at("splashPath").get<std::string>(); 
  v.championId = j.at("championId").get<int32_t>(); 
  v.id = j.at("id").get<int32_t>(); 
  }
}