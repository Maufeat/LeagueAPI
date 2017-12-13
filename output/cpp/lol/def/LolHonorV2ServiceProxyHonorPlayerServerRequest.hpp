#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolHonorV2ServiceProxyHonorPlayerServerRequest { 
    uint64_t gameId;
    uint64_t summonerId;
    std::string honorType; 
  };
  void to_json(json& j, const LolHonorV2ServiceProxyHonorPlayerServerRequest& v) {
  j["gameId"] = v.gameId; 
  j["summonerId"] = v.summonerId; 
  j["honorType"] = v.honorType; 
  }
  void from_json(const json& j, LolHonorV2ServiceProxyHonorPlayerServerRequest& v) {
  v.gameId = j.at("gameId").get<uint64_t>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.honorType = j.at("honorType").get<std::string>(); 
  }
}