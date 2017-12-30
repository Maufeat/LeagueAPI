#pragma once
#include "../base_def.hpp" 
#include "LolChampionsCollectionsOwnership.hpp"
namespace lol {
  struct LolChampionsCollectionsChampionChroma { 
    std::string name;
    bool lastSelected;
    int32_t id;
    std::optional<std::string> chromaPath;
    bool stillObtainable;
    bool disabled;
    LolChampionsCollectionsOwnership ownership;
    std::vector<std::string> colors;
    int32_t championId; 
  };
  inline void to_json(json& j, const LolChampionsCollectionsChampionChroma& v) {
    j["name"] = v.name; 
    j["lastSelected"] = v.lastSelected; 
    j["id"] = v.id; 
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    j["stillObtainable"] = v.stillObtainable; 
    j["disabled"] = v.disabled; 
    j["ownership"] = v.ownership; 
    j["colors"] = v.colors; 
    j["championId"] = v.championId; 
  }
  inline void from_json(const json& j, LolChampionsCollectionsChampionChroma& v) {
    v.name = j.at("name").get<std::string>(); 
    v.lastSelected = j.at("lastSelected").get<bool>(); 
    v.id = j.at("id").get<int32_t>(); 
    if(auto it = j.find("chromaPath"); it != j.end() && !it->is_null())
      v.chromaPath = it->get<std::optional<std::string>>(); 
    v.stillObtainable = j.at("stillObtainable").get<bool>(); 
    v.disabled = j.at("disabled").get<bool>(); 
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership>(); 
    v.colors = j.at("colors").get<std::vector<std::string>>(); 
    v.championId = j.at("championId").get<int32_t>(); 
  }
}