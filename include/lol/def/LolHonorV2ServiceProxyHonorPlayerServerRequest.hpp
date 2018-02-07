#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolHonorV2ServiceProxyHonorPlayerServerRequest { 
    uint64_t summonerId;
    std::string honorType;
    uint64_t gameId; 
  };
  inline void to_json(json& j, const LolHonorV2ServiceProxyHonorPlayerServerRequest& v) {
    j["summonerId"] = v.summonerId; 
    j["honorType"] = v.honorType; 
    j["gameId"] = v.gameId; 
  }
  inline void from_json(const json& j, LolHonorV2ServiceProxyHonorPlayerServerRequest& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.honorType = j.at("honorType").get<std::string>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
  }
}