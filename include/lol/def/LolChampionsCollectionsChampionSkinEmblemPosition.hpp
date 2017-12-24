#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChampionsCollectionsChampionSkinEmblemPosition { 
    std::string horizontal;
    std::string vertical; 
  };
  inline void to_json(json& j, const LolChampionsCollectionsChampionSkinEmblemPosition& v) {
    j["horizontal"] = v.horizontal; 
    j["vertical"] = v.vertical; 
  }
  inline void from_json(const json& j, LolChampionsCollectionsChampionSkinEmblemPosition& v) {
    v.horizontal = j.at("horizontal").get<std::string>(); 
    v.vertical = j.at("vertical").get<std::string>(); 
  }
}