#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct PatcherComponentStateProgress { /**/ 
    double bytesPerSecond;/**/
    uint64_t bytesRequired;/**/
    uint64_t bytesComplete;/**/
  };
  static void to_json(json& j, const PatcherComponentStateProgress& v) { 
    j["bytesPerSecond"] = v.bytesPerSecond;
    j["bytesRequired"] = v.bytesRequired;
    j["bytesComplete"] = v.bytesComplete;
  }
  static void from_json(const json& j, PatcherComponentStateProgress& v) { 
    v.bytesPerSecond = j.at("bytesPerSecond").get<double>(); 
    v.bytesRequired = j.at("bytesRequired").get<uint64_t>(); 
    v.bytesComplete = j.at("bytesComplete").get<uint64_t>(); 
  }
} 