#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPerksPerkSettingResource { 
    std::vector<int32_t> perkIds;
    int32_t perkStyle;
    int32_t perkSubStyle; 
  };
  inline void to_json(json& j, const LolPerksPerkSettingResource& v) {
    j["perkIds"] = v.perkIds; 
    j["perkStyle"] = v.perkStyle; 
    j["perkSubStyle"] = v.perkSubStyle; 
  }
  inline void from_json(const json& j, LolPerksPerkSettingResource& v) {
    v.perkIds = j.at("perkIds").get<std::vector<int32_t>>(); 
    v.perkStyle = j.at("perkStyle").get<int32_t>(); 
    v.perkSubStyle = j.at("perkSubStyle").get<int32_t>(); 
  }
}