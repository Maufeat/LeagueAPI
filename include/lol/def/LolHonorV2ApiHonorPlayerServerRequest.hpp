#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolHonorV2ApiHonorPlayerServerRequest { 
    uint64_t summonerId;
    std::string honorCategory;
    uint64_t gameId; 
  };
  inline void to_json(json& j, const LolHonorV2ApiHonorPlayerServerRequest& v) {
    j["summonerId"] = v.summonerId; 
    j["honorCategory"] = v.honorCategory; 
    j["gameId"] = v.gameId; 
  }
  inline void from_json(const json& j, LolHonorV2ApiHonorPlayerServerRequest& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.honorCategory = j.at("honorCategory").get<std::string>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
  }
}