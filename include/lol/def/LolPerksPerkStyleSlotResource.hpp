#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPerksPerkStyleSlotResource { 
    std::vector<int32_t> perks;
    std::string slotLabel;
    std::string type; 
  };
  inline void to_json(json& j, const LolPerksPerkStyleSlotResource& v) {
    j["perks"] = v.perks; 
    j["slotLabel"] = v.slotLabel; 
    j["type"] = v.type; 
  }
  inline void from_json(const json& j, LolPerksPerkStyleSlotResource& v) {
    v.perks = j.at("perks").get<std::vector<int32_t>>(); 
    v.slotLabel = j.at("slotLabel").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
  }
}