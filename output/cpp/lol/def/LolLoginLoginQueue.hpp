#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLoginLoginQueue { 
    bool isPositionCapped;
    uint64_t estimatedPositionInQueue;
    std::optional<uint64_t> approximateWaitTimeSeconds; 
  };
  void to_json(json& j, const LolLoginLoginQueue& v) {
  j["isPositionCapped"] = v.isPositionCapped; 
  j["estimatedPositionInQueue"] = v.estimatedPositionInQueue; 
  j["approximateWaitTimeSeconds"] = v.approximateWaitTimeSeconds; 
  }
  void from_json(const json& j, LolLoginLoginQueue& v) {
  v.isPositionCapped = j.at("isPositionCapped").get<bool>(); 
  v.estimatedPositionInQueue = j.at("estimatedPositionInQueue").get<uint64_t>(); 
  v.approximateWaitTimeSeconds = j.at("approximateWaitTimeSeconds").get<std::optional<uint64_t>>(); 
  }
}