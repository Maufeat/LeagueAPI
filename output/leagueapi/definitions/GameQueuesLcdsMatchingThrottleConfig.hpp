#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct GameQueuesLcdsMatchingThrottleConfig { /**/ 
    int64_t limit;/**/
    std::string cacheName;/**/
  };
  static void to_json(json& j, const GameQueuesLcdsMatchingThrottleConfig& v) { 
    j["limit"] = v.limit;
    j["cacheName"] = v.cacheName;
  }
  static void from_json(const json& j, GameQueuesLcdsMatchingThrottleConfig& v) { 
    v.limit = j.at("limit").get<int64_t>(); 
    v.cacheName = j.at("cacheName").get<std::string>(); 
  }
} 