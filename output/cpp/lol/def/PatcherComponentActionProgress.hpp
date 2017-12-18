#pragma once
#include "../base_def.hpp" 
#include "PatcherComponentStateWorkType.hpp"
#include "PatcherComponentStateProgress.hpp"
namespace lol {
  struct PatcherComponentActionProgress { 
    std::string currentItem;
    PatcherComponentStateProgress total;
    PatcherComponentStateProgress network;
    PatcherComponentStateWorkType primaryWork; 
  };
  inline void to_json(json& j, const PatcherComponentActionProgress& v) {
    j["currentItem"] = v.currentItem; 
    j["total"] = v.total; 
    j["network"] = v.network; 
    j["primaryWork"] = v.primaryWork; 
  }
  inline void from_json(const json& j, PatcherComponentActionProgress& v) {
    v.currentItem = j.at("currentItem").get<std::string>(); 
    v.total = j.at("total").get<PatcherComponentStateProgress>(); 
    v.network = j.at("network").get<PatcherComponentStateProgress>(); 
    v.primaryWork = j.at("primaryWork").get<PatcherComponentStateWorkType>(); 
  }
}