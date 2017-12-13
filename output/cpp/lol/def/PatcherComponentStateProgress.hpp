#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PatcherComponentStateProgress { 
    double bytesPerSecond;
    uint64_t bytesRequired;
    uint64_t bytesComplete; 
  };
  void to_json(json& j, const PatcherComponentStateProgress& v) {
  j["bytesPerSecond"] = v.bytesPerSecond; 
  j["bytesRequired"] = v.bytesRequired; 
  j["bytesComplete"] = v.bytesComplete; 
  }
  void from_json(const json& j, PatcherComponentStateProgress& v) {
  v.bytesPerSecond = j.at("bytesPerSecond").get<double>(); 
  v.bytesRequired = j.at("bytesRequired").get<uint64_t>(); 
  v.bytesComplete = j.at("bytesComplete").get<uint64_t>(); 
  }
}