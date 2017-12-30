#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPerksPerkSubStyleBonusResource { 
    int32_t styleId;
    int32_t perkId; 
  };
  inline void to_json(json& j, const LolPerksPerkSubStyleBonusResource& v) {
    j["styleId"] = v.styleId; 
    j["perkId"] = v.perkId; 
  }
  inline void from_json(const json& j, LolPerksPerkSubStyleBonusResource& v) {
    v.styleId = j.at("styleId").get<int32_t>(); 
    v.perkId = j.at("perkId").get<int32_t>(); 
  }
}