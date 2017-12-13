#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChampionsCollectionsChampionSkinEmblemPosition { 
    std::string vertical;
    std::string horizontal; 
  };
  void to_json(json& j, const LolChampionsCollectionsChampionSkinEmblemPosition& v) {
    j["vertical"] = v.vertical; 
    j["horizontal"] = v.horizontal; 
  }
  void from_json(const json& j, LolChampionsCollectionsChampionSkinEmblemPosition& v) {
    v.vertical = j.at("vertical").get<std::string>(); 
    v.horizontal = j.at("horizontal").get<std::string>(); 
  }
}