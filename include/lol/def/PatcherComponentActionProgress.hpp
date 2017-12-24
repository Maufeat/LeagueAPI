#pragma once
#include "../base_def.hpp" 
#include "PatcherComponentStateProgress.hpp"
#include "PatcherComponentStateWorkType.hpp"
namespace lol {
  struct PatcherComponentActionProgress { 
    PatcherComponentStateProgress network;
    PatcherComponentStateWorkType primaryWork;
    PatcherComponentStateProgress total;
    std::string currentItem; 
  };
  inline void to_json(json& j, const PatcherComponentActionProgress& v) {
    j["network"] = v.network; 
    j["primaryWork"] = v.primaryWork; 
    j["total"] = v.total; 
    j["currentItem"] = v.currentItem; 
  }
  inline void from_json(const json& j, PatcherComponentActionProgress& v) {
    v.network = j.at("network").get<PatcherComponentStateProgress>(); 
    v.primaryWork = j.at("primaryWork").get<PatcherComponentStateWorkType>(); 
    v.total = j.at("total").get<PatcherComponentStateProgress>(); 
    v.currentItem = j.at("currentItem").get<std::string>(); 
  }
}