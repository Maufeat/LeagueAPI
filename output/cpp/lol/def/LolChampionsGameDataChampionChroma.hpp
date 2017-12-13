#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChampionsGameDataChampionChroma { 
    std::vector<std::string> colors;
    int32_t id;
    std::string chromaPath; 
  };
  void to_json(json& j, const LolChampionsGameDataChampionChroma& v) {
  j["colors"] = v.colors; 
  j["id"] = v.id; 
  j["chromaPath"] = v.chromaPath; 
  }
  void from_json(const json& j, LolChampionsGameDataChampionChroma& v) {
  v.colors = j.at("colors").get<std::vector<std::string>>(); 
  v.id = j.at("id").get<int32_t>(); 
  v.chromaPath = j.at("chromaPath").get<std::string>(); 
  }
}