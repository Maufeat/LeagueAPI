#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolHonorV2ServiceProxyHonorPlayerServerRequest { /**/ 
    uint64_t gameId;/**/
    uint64_t summonerId;/**/
    std::string honorType;/**/
  };
  static void to_json(json& j, const LolHonorV2ServiceProxyHonorPlayerServerRequest& v) { 
    j["gameId"] = v.gameId;
    j["summonerId"] = v.summonerId;
    j["honorType"] = v.honorType;
  }
  static void from_json(const json& j, LolHonorV2ServiceProxyHonorPlayerServerRequest& v) { 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.honorType = j.at("honorType").get<std::string>(); 
  }
} 