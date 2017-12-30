#pragma once
#include "../base_def.hpp" 
#include "PatcherComponentStateProgress.hpp"
#include "PatcherComponentStateWorkType.hpp"
namespace lol {
  struct PatcherComponentActionProgress { 
    PatcherComponentStateProgress network;
    std::string currentItem;
    PatcherComponentStateProgress total;
    PatcherComponentStateWorkType primaryWork; 
  };
  inline void to_json(json& j, const PatcherComponentActionProgress& v) {
    j["network"] = v.network; 
    j["currentItem"] = v.currentItem; 
    j["total"] = v.total; 
    j["primaryWork"] = v.primaryWork; 
  }
  inline void from_json(const json& j, PatcherComponentActionProgress& v) {
    v.network = j.at("network").get<PatcherComponentStateProgress>(); 
    v.currentItem = j.at("currentItem").get<std::string>(); 
    v.total = j.at("total").get<PatcherComponentStateProgress>(); 
    v.primaryWork = j.at("primaryWork").get<PatcherComponentStateWorkType>(); 
  }
}