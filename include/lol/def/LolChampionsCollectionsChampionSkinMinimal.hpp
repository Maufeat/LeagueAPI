#pragma once
#include "../base_def.hpp" 
#include "LolChampionsCollectionsOwnership.hpp"
namespace lol {
  struct LolChampionsCollectionsChampionSkinMinimal { 
    std::string name;
    bool lastSelected;
    int32_t id;
    std::optional<std::string> chromaPath;
    bool isBase;
    std::string tilePath;
    bool stillObtainable;
    std::string splashPath;
    bool disabled;
    LolChampionsCollectionsOwnership ownership;
    int32_t championId; 
  };
  inline void to_json(json& j, const LolChampionsCollectionsChampionSkinMinimal& v) {
    j["name"] = v.name; 
    j["lastSelected"] = v.lastSelected; 
    j["id"] = v.id; 
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    j["isBase"] = v.isBase; 
    j["tilePath"] = v.tilePath; 
    j["stillObtainable"] = v.stillObtainable; 
    j["splashPath"] = v.splashPath; 
    j["disabled"] = v.disabled; 
    j["ownership"] = v.ownership; 
    j["championId"] = v.championId; 
  }
  inline void from_json(const json& j, LolChampionsCollectionsChampionSkinMinimal& v) {
    v.name = j.at("name").get<std::string>(); 
    v.lastSelected = j.at("lastSelected").get<bool>(); 
    v.id = j.at("id").get<int32_t>(); 
    if(auto it = j.find("chromaPath"); it != j.end() && !it->is_null())
      v.chromaPath = it->get<std::optional<std::string>>(); 
    v.isBase = j.at("isBase").get<bool>(); 
    v.tilePath = j.at("tilePath").get<std::string>(); 
    v.stillObtainable = j.at("stillObtainable").get<bool>(); 
    v.splashPath = j.at("splashPath").get<std::string>(); 
    v.disabled = j.at("disabled").get<bool>(); 
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership>(); 
    v.championId = j.at("championId").get<int32_t>(); 
  }
}