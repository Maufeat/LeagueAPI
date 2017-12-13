#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolCollectionsLcdsDynamicClientConfig { 
    json DisabledChampions; 
  };
  void to_json(json& j, const LolCollectionsLcdsDynamicClientConfig& v) {
    j["DisabledChampions"] = v.DisabledChampions; 
  }
  void from_json(const json& j, LolCollectionsLcdsDynamicClientConfig& v) {
    v.DisabledChampions = j.at("DisabledChampions").get<json>(); 
  }
}