#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolMissionsCollectionsSummoner { 
    int32_t summonerLevel; 
  };
  inline void to_json(json& j, const LolMissionsCollectionsSummoner& v) {
    j["summonerLevel"] = v.summonerLevel; 
  }
  inline void from_json(const json& j, LolMissionsCollectionsSummoner& v) {
    v.summonerLevel = j.at("summonerLevel").get<int32_t>(); 
  }
}