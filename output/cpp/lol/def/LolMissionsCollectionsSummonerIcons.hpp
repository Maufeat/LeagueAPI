#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolMissionsCollectionsSummonerIcons { 
    std::vector<int32_t> icons; 
  };
  inline void to_json(json& j, const LolMissionsCollectionsSummonerIcons& v) {
    j["icons"] = v.icons; 
  }
  inline void from_json(const json& j, LolMissionsCollectionsSummonerIcons& v) {
    v.icons = j.at("icons").get<std::vector<int32_t>>(); 
  }
}