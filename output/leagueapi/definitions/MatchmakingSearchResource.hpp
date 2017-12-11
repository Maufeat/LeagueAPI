#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/MatchmakingSearchErrorResource.hpp>"

namespace leagueapi {
  struct MatchmakingSearchResource { /**/ 
    int32_t queueId;/**/
    std::vector<MatchmakingSearchErrorResource> errors;/**/
  };
  static void to_json(json& j, const MatchmakingSearchResource& v) { 
    j["queueId"] = v.queueId;
    j["errors"] = v.errors;
  }
  static void from_json(const json& j, MatchmakingSearchResource& v) { 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.errors = j.at("errors").get<std::vector<MatchmakingSearchErrorResource>>(); 
  }
} 