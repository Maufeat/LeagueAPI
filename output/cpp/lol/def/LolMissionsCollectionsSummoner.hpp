#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolMissionsCollectionsSummoner { 
    int32_t summonerLevel; 
  };
  void to_json(json& j, const LolMissionsCollectionsSummoner& v) {
  j["summonerLevel"] = v.summonerLevel; 
  }
  void from_json(const json& j, LolMissionsCollectionsSummoner& v) {
  v.summonerLevel = j.at("summonerLevel").get<int32_t>(); 
  }
}