#pragma once
#include "../base_def.hpp" 
#include "LolChampionsCollectionsOwnership.hpp"
namespace lol {
  struct LolChampionsCollectionsChampionSkinMinimal { 
    bool stillObtainable;
    bool isBase;
    std::string splashPath;
    bool disabled;
    int32_t championId;
    std::string name;
    int32_t id;
    std::optional<std::string> chromaPath;
    std::string tilePath;
    LolChampionsCollectionsOwnership ownership;
    bool lastSelected; 
  };
  inline void to_json(json& j, const LolChampionsCollectionsChampionSkinMinimal& v) {
    j["stillObtainable"] = v.stillObtainable; 
    j["isBase"] = v.isBase; 
    j["splashPath"] = v.splashPath; 
    j["disabled"] = v.disabled; 
    j["championId"] = v.championId; 
    j["name"] = v.name; 
    j["id"] = v.id; 
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    j["tilePath"] = v.tilePath; 
    j["ownership"] = v.ownership; 
    j["lastSelected"] = v.lastSelected; 
  }
  inline void from_json(const json& j, LolChampionsCollectionsChampionSkinMinimal& v) {
    v.stillObtainable = j.at("stillObtainable").get<bool>(); 
    v.isBase = j.at("isBase").get<bool>(); 
    v.splashPath = j.at("splashPath").get<std::string>(); 
    v.disabled = j.at("disabled").get<bool>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
    if(auto it = j.find("chromaPath"); it != j.end() && !it->is_null())
      v.chromaPath = it->get<std::optional<std::string>>(); 
    v.tilePath = j.at("tilePath").get<std::string>(); 
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership>(); 
    v.lastSelected = j.at("lastSelected").get<bool>(); 
  }
}