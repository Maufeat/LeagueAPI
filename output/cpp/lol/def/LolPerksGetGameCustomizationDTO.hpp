#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPerksGetGameCustomizationDTO { 
    std::string queueType; 
  };
  inline void to_json(json& j, const LolPerksGetGameCustomizationDTO& v) {
    j["queueType"] = v.queueType; 
  }
  inline void from_json(const json& j, LolPerksGetGameCustomizationDTO& v) {
    v.queueType = j.at("queueType").get<std::string>(); 
  }
}