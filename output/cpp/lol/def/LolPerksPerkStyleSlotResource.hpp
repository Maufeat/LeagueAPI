#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPerksPerkStyleSlotResource { 
    std::vector<int32_t> perks;
    std::string type;
    std::string slotLabel; 
  };
  void to_json(json& j, const LolPerksPerkStyleSlotResource& v) {
    j["perks"] = v.perks; 
    j["type"] = v.type; 
    j["slotLabel"] = v.slotLabel; 
  }
  void from_json(const json& j, LolPerksPerkStyleSlotResource& v) {
    v.perks = j.at("perks").get<std::vector<int32_t>>(); 
    v.type = j.at("type").get<std::string>(); 
    v.slotLabel = j.at("slotLabel").get<std::string>(); 
  }
}