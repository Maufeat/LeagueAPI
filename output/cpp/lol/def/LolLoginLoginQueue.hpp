#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLoginLoginQueue { 
    uint64_t estimatedPositionInQueue;
    std::optional<uint64_t> approximateWaitTimeSeconds;
    bool isPositionCapped; 
  };
  void to_json(json& j, const LolLoginLoginQueue& v) {
  j["estimatedPositionInQueue"] = v.estimatedPositionInQueue; 
  j["approximateWaitTimeSeconds"] = v.approximateWaitTimeSeconds; 
  j["isPositionCapped"] = v.isPositionCapped; 
  }
  void from_json(const json& j, LolLoginLoginQueue& v) {
  v.estimatedPositionInQueue = j.at("estimatedPositionInQueue").get<uint64_t>(); 
  v.approximateWaitTimeSeconds = j.at("approximateWaitTimeSeconds").get<std::optional<uint64_t>>(); 
  v.isPositionCapped = j.at("isPositionCapped").get<bool>(); 
  }
}