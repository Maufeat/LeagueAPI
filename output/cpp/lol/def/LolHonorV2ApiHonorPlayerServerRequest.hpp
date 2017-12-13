#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolHonorV2ApiHonorPlayerServerRequest { 
    std::string honorCategory;
    uint64_t gameId;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LolHonorV2ApiHonorPlayerServerRequest& v) {
  j["honorCategory"] = v.honorCategory; 
  j["gameId"] = v.gameId; 
  j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LolHonorV2ApiHonorPlayerServerRequest& v) {
  v.honorCategory = j.at("honorCategory").get<std::string>(); 
  v.gameId = j.at("gameId").get<uint64_t>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}