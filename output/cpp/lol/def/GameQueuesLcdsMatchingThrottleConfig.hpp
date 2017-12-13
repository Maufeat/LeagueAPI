#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct GameQueuesLcdsMatchingThrottleConfig { 
    int64_t limit;
    std::string cacheName; 
  };
  void to_json(json& j, const GameQueuesLcdsMatchingThrottleConfig& v) {
    j["limit"] = v.limit; 
    j["cacheName"] = v.cacheName; 
  }
  void from_json(const json& j, GameQueuesLcdsMatchingThrottleConfig& v) {
    v.limit = j.at("limit").get<int64_t>(); 
    v.cacheName = j.at("cacheName").get<std::string>(); 
  }
}