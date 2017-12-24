#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChampionsGameDataChampionChroma { 
    int32_t id;
    std::string chromaPath;
    std::vector<std::string> colors; 
  };
  inline void to_json(json& j, const LolChampionsGameDataChampionChroma& v) {
    j["id"] = v.id; 
    j["chromaPath"] = v.chromaPath; 
    j["colors"] = v.colors; 
  }
  inline void from_json(const json& j, LolChampionsGameDataChampionChroma& v) {
    v.id = j.at("id").get<int32_t>(); 
    v.chromaPath = j.at("chromaPath").get<std::string>(); 
    v.colors = j.at("colors").get<std::vector<std::string>>(); 
  }
}