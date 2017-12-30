#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashChangeIconRequest { 
    int32_t iconId;
    int32_t iconColorId; 
  };
  inline void to_json(json& j, const LolClashChangeIconRequest& v) {
    j["iconId"] = v.iconId; 
    j["iconColorId"] = v.iconColorId; 
  }
  inline void from_json(const json& j, LolClashChangeIconRequest& v) {
    v.iconId = j.at("iconId").get<int32_t>(); 
    v.iconColorId = j.at("iconColorId").get<int32_t>(); 
  }
}