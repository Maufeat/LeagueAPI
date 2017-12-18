#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPerksPerkSubStyleBonusResource { 
    int32_t perkId;
    int32_t styleId; 
  };
  inline void to_json(json& j, const LolPerksPerkSubStyleBonusResource& v) {
    j["perkId"] = v.perkId; 
    j["styleId"] = v.styleId; 
  }
  inline void from_json(const json& j, LolPerksPerkSubStyleBonusResource& v) {
    v.perkId = j.at("perkId").get<int32_t>(); 
    v.styleId = j.at("styleId").get<int32_t>(); 
  }
}