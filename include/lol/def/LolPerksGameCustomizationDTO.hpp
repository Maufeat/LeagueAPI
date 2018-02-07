#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPerksGameCustomizationDTO { 
    std::string category;
    std::string content;
    uint64_t queueType; 
  };
  inline void to_json(json& j, const LolPerksGameCustomizationDTO& v) {
    j["category"] = v.category; 
    j["content"] = v.content; 
    j["queueType"] = v.queueType; 
  }
  inline void from_json(const json& j, LolPerksGameCustomizationDTO& v) {
    v.category = j.at("category").get<std::string>(); 
    v.content = j.at("content").get<std::string>(); 
    v.queueType = j.at("queueType").get<uint64_t>(); 
  }
}