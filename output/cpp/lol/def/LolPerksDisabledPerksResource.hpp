#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPerksDisabledPerksResource { 
    std::vector<int32_t> disabledPerks; 
  };
  void to_json(json& j, const LolPerksDisabledPerksResource& v) {
    j["disabledPerks"] = v.disabledPerks; 
  }
  void from_json(const json& j, LolPerksDisabledPerksResource& v) {
    v.disabledPerks = j.at("disabledPerks").get<std::vector<int32_t>>(); 
  }
}