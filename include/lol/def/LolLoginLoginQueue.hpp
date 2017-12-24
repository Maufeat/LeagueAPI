#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLoginLoginQueue { 
    uint64_t estimatedPositionInQueue;
    bool isPositionCapped;
    std::optional<uint64_t> approximateWaitTimeSeconds; 
  };
  inline void to_json(json& j, const LolLoginLoginQueue& v) {
    j["estimatedPositionInQueue"] = v.estimatedPositionInQueue; 
    j["isPositionCapped"] = v.isPositionCapped; 
    if(v.approximateWaitTimeSeconds)
      j["approximateWaitTimeSeconds"] = *v.approximateWaitTimeSeconds;
  }
  inline void from_json(const json& j, LolLoginLoginQueue& v) {
    v.estimatedPositionInQueue = j.at("estimatedPositionInQueue").get<uint64_t>(); 
    v.isPositionCapped = j.at("isPositionCapped").get<bool>(); 
    if(auto it = j.find("approximateWaitTimeSeconds"); it != j.end() && !it->is_null())
      v.approximateWaitTimeSeconds = it->get<std::optional<uint64_t>>(); 
  }
}