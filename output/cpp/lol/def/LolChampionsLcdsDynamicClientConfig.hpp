#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChampionsLcdsDynamicClientConfig { 
    json DisabledChampions; 
  };
  void to_json(json& j, const LolChampionsLcdsDynamicClientConfig& v) {
  j["DisabledChampions"] = v.DisabledChampions; 
  }
  void from_json(const json& j, LolChampionsLcdsDynamicClientConfig& v) {
  v.DisabledChampions = j.at("DisabledChampions").get<json>(); 
  }
}