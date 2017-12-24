#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PatcherComponentStateProgress { 
    uint64_t bytesRequired;
    double bytesPerSecond;
    uint64_t bytesComplete; 
  };
  inline void to_json(json& j, const PatcherComponentStateProgress& v) {
    j["bytesRequired"] = v.bytesRequired; 
    j["bytesPerSecond"] = v.bytesPerSecond; 
    j["bytesComplete"] = v.bytesComplete; 
  }
  inline void from_json(const json& j, PatcherComponentStateProgress& v) {
    v.bytesRequired = j.at("bytesRequired").get<uint64_t>(); 
    v.bytesPerSecond = j.at("bytesPerSecond").get<double>(); 
    v.bytesComplete = j.at("bytesComplete").get<uint64_t>(); 
  }
}