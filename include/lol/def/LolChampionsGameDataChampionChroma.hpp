#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChampionsGameDataChampionChroma { 
    int32_t id;
    std::vector<std::string> colors;
    std::string chromaPath; 
  };
  inline void to_json(json& j, const LolChampionsGameDataChampionChroma& v) {
    j["id"] = v.id; 
    j["colors"] = v.colors; 
    j["chromaPath"] = v.chromaPath; 
  }
  inline void from_json(const json& j, LolChampionsGameDataChampionChroma& v) {
    v.id = j.at("id").get<int32_t>(); 
    v.colors = j.at("colors").get<std::vector<std::string>>(); 
    v.chromaPath = j.at("chromaPath").get<std::string>(); 
  }
}