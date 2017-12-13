#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPerksPerkSettingResource { 
    int32_t perkSubStyle;
    std::vector<int32_t> perkIds;
    int32_t perkStyle; 
  };
  void to_json(json& j, const LolPerksPerkSettingResource& v) {
  j["perkSubStyle"] = v.perkSubStyle; 
  j["perkIds"] = v.perkIds; 
  j["perkStyle"] = v.perkStyle; 
  }
  void from_json(const json& j, LolPerksPerkSettingResource& v) {
  v.perkSubStyle = j.at("perkSubStyle").get<int32_t>(); 
  v.perkIds = j.at("perkIds").get<std::vector<int32_t>>(); 
  v.perkStyle = j.at("perkStyle").get<int32_t>(); 
  }
}