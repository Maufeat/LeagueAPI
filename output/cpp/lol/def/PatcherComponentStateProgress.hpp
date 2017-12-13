#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PatcherComponentStateProgress { 
    uint64_t bytesRequired;
    uint64_t bytesComplete;
    double bytesPerSecond; 
  };
  void to_json(json& j, const PatcherComponentStateProgress& v) {
    j["bytesRequired"] = v.bytesRequired; 
    j["bytesComplete"] = v.bytesComplete; 
    j["bytesPerSecond"] = v.bytesPerSecond; 
  }
  void from_json(const json& j, PatcherComponentStateProgress& v) {
    v.bytesRequired = j.at("bytesRequired").get<uint64_t>(); 
    v.bytesComplete = j.at("bytesComplete").get<uint64_t>(); 
    v.bytesPerSecond = j.at("bytesPerSecond").get<double>(); 
  }
}