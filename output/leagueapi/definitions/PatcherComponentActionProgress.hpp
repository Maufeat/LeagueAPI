#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/PatcherComponentStateProgress.hpp>"
#include "<leagueapi/definitions/PatcherComponentStateWorkType.hpp>"

namespace leagueapi {
  struct PatcherComponentActionProgress { /**/ 
    PatcherComponentStateProgress total;/**/
    std::string currentItem;/**/
    PatcherComponentStateWorkType primaryWork;/**/
    PatcherComponentStateProgress network;/**/
  };
  static void to_json(json& j, const PatcherComponentActionProgress& v) { 
    j["total"] = v.total;
    j["currentItem"] = v.currentItem;
    j["primaryWork"] = v.primaryWork;
    j["network"] = v.network;
  }
  static void from_json(const json& j, PatcherComponentActionProgress& v) { 
    v.total = j.at("total").get<PatcherComponentStateProgress>(); 
    v.currentItem = j.at("currentItem").get<std::string>(); 
    v.primaryWork = j.at("primaryWork").get<PatcherComponentStateWorkType>(); 
    v.network = j.at("network").get<PatcherComponentStateProgress>(); 
  }
} 