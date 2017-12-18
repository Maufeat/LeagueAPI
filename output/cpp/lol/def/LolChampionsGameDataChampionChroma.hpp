#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChampionsGameDataChampionChroma { 
    std::string chromaPath;
    std::vector<std::string> colors;
    int32_t id; 
  };
  inline void to_json(json& j, const LolChampionsGameDataChampionChroma& v) {
    j["chromaPath"] = v.chromaPath; 
    j["colors"] = v.colors; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolChampionsGameDataChampionChroma& v) {
    v.chromaPath = j.at("chromaPath").get<std::string>(); 
    v.colors = j.at("colors").get<std::vector<std::string>>(); 
    v.id = j.at("id").get<int32_t>(); 
  }
}