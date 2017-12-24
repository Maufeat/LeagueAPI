#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPerksGameCustomizationDTO { 
    uint64_t queueType;
    std::string category;
    std::string content; 
  };
  inline void to_json(json& j, const LolPerksGameCustomizationDTO& v) {
    j["queueType"] = v.queueType; 
    j["category"] = v.category; 
    j["content"] = v.content; 
  }
  inline void from_json(const json& j, LolPerksGameCustomizationDTO& v) {
    v.queueType = j.at("queueType").get<uint64_t>(); 
    v.category = j.at("category").get<std::string>(); 
    v.content = j.at("content").get<std::string>(); 
  }
}