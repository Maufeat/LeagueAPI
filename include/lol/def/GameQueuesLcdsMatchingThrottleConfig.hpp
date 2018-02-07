#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct GameQueuesLcdsMatchingThrottleConfig { 
    std::string cacheName;
    int64_t limit; 
  };
  inline void to_json(json& j, const GameQueuesLcdsMatchingThrottleConfig& v) {
    j["cacheName"] = v.cacheName; 
    j["limit"] = v.limit; 
  }
  inline void from_json(const json& j, GameQueuesLcdsMatchingThrottleConfig& v) {
    v.cacheName = j.at("cacheName").get<std::string>(); 
    v.limit = j.at("limit").get<int64_t>(); 
  }
}