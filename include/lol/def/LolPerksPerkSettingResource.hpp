#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPerksPerkSettingResource { 
    int32_t perkSubStyle;
    int32_t perkStyle;
    std::vector<int32_t> perkIds; 
  };
  inline void to_json(json& j, const LolPerksPerkSettingResource& v) {
    j["perkSubStyle"] = v.perkSubStyle; 
    j["perkStyle"] = v.perkStyle; 
    j["perkIds"] = v.perkIds; 
  }
  inline void from_json(const json& j, LolPerksPerkSettingResource& v) {
    v.perkSubStyle = j.at("perkSubStyle").get<int32_t>(); 
    v.perkStyle = j.at("perkStyle").get<int32_t>(); 
    v.perkIds = j.at("perkIds").get<std::vector<int32_t>>(); 
  }
}