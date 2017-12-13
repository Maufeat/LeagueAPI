#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPerksGetGameCustomizationDTO { 
    std::string queueType; 
  };
  void to_json(json& j, const LolPerksGetGameCustomizationDTO& v) {
    j["queueType"] = v.queueType; 
  }
  void from_json(const json& j, LolPerksGetGameCustomizationDTO& v) {
    v.queueType = j.at("queueType").get<std::string>(); 
  }
}