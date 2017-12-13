#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolHonorV2ServiceProxyHonorPlayerServerRequest { 
    std::string honorType;
    uint64_t gameId;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LolHonorV2ServiceProxyHonorPlayerServerRequest& v) {
  j["honorType"] = v.honorType; 
  j["gameId"] = v.gameId; 
  j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LolHonorV2ServiceProxyHonorPlayerServerRequest& v) {
  v.honorType = j.at("honorType").get<std::string>(); 
  v.gameId = j.at("gameId").get<uint64_t>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}