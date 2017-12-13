#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/PatcherComponentStateWorkType.hpp>
#include <lol/def/PatcherComponentStateProgress.hpp>
namespace lol {
  struct PatcherComponentActionProgress { 
    PatcherComponentStateProgress total;
    std::string currentItem;
    PatcherComponentStateWorkType primaryWork;
    PatcherComponentStateProgress network; 
  };
  void to_json(json& j, const PatcherComponentActionProgress& v) {
  j["total"] = v.total; 
  j["currentItem"] = v.currentItem; 
  j["primaryWork"] = v.primaryWork; 
  j["network"] = v.network; 
  }
  void from_json(const json& j, PatcherComponentActionProgress& v) {
  v.total = j.at("total").get<PatcherComponentStateProgress>(); 
  v.currentItem = j.at("currentItem").get<std::string>(); 
  v.primaryWork = j.at("primaryWork").get<PatcherComponentStateWorkType>(); 
  v.network = j.at("network").get<PatcherComponentStateProgress>(); 
  }
}