#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChampionsCollectionsChampionSkinEmblemPath { 
    std::string small;
    std::string large; 
  };
  void to_json(json& j, const LolChampionsCollectionsChampionSkinEmblemPath& v) {
  j["small"] = v.small; 
  j["large"] = v.large; 
  }
  void from_json(const json& j, LolChampionsCollectionsChampionSkinEmblemPath& v) {
  v.small = j.at("small").get<std::string>(); 
  v.large = j.at("large").get<std::string>(); 
  }
}