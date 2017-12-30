#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChampionsGameDataChampionChroma { 
    std::string chromaPath;
    int32_t id;
    std::vector<std::string> colors; 
  };
  inline void to_json(json& j, const LolChampionsGameDataChampionChroma& v) {
    j["chromaPath"] = v.chromaPath; 
    j["id"] = v.id; 
    j["colors"] = v.colors; 
  }
  inline void from_json(const json& j, LolChampionsGameDataChampionChroma& v) {
    v.chromaPath = j.at("chromaPath").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.colors = j.at("colors").get<std::vector<std::string>>(); 
  }
}