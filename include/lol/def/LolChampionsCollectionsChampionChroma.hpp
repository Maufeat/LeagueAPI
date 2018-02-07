#pragma once
#include "../base_def.hpp" 
#include "LolChampionsCollectionsOwnership.hpp"
namespace lol {
  struct LolChampionsCollectionsChampionChroma { 
    int32_t championId;
    std::optional<std::string> chromaPath;
    int32_t id;
    std::string name;
    LolChampionsCollectionsOwnership ownership;
    bool disabled;
    bool stillObtainable;
    bool lastSelected;
    std::vector<std::string> colors; 
  };
  inline void to_json(json& j, const LolChampionsCollectionsChampionChroma& v) {
    j["championId"] = v.championId; 
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    j["id"] = v.id; 
    j["name"] = v.name; 
    j["ownership"] = v.ownership; 
    j["disabled"] = v.disabled; 
    j["stillObtainable"] = v.stillObtainable; 
    j["lastSelected"] = v.lastSelected; 
    j["colors"] = v.colors; 
  }
  inline void from_json(const json& j, LolChampionsCollectionsChampionChroma& v) {
    v.championId = j.at("championId").get<int32_t>(); 
    if(auto it = j.find("chromaPath"); it != j.end() && !it->is_null())
      v.chromaPath = it->get<std::optional<std::string>>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership>(); 
    v.disabled = j.at("disabled").get<bool>(); 
    v.stillObtainable = j.at("stillObtainable").get<bool>(); 
    v.lastSelected = j.at("lastSelected").get<bool>(); 
    v.colors = j.at("colors").get<std::vector<std::string>>(); 
  }
}