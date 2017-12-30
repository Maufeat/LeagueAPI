#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolHonorV2ApiHonorPlayerServerRequest { 
    uint64_t gameId;
    std::string honorCategory;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolHonorV2ApiHonorPlayerServerRequest& v) {
    j["gameId"] = v.gameId; 
    j["honorCategory"] = v.honorCategory; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolHonorV2ApiHonorPlayerServerRequest& v) {
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.honorCategory = j.at("honorCategory").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}