#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChampionsLcdsDynamicClientConfig { 
    json DisabledChampions; 
  };
  inline void to_json(json& j, const LolChampionsLcdsDynamicClientConfig& v) {
    j["DisabledChampions"] = v.DisabledChampions; 
  }
  inline void from_json(const json& j, LolChampionsLcdsDynamicClientConfig& v) {
    v.DisabledChampions = j.at("DisabledChampions").get<json>(); 
  }
}