#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPerksGameCustomizationDTO { 
    std::string category;
    uint64_t queueType;
    std::string content; 
  };
  void to_json(json& j, const LolPerksGameCustomizationDTO& v) {
  j["category"] = v.category; 
  j["queueType"] = v.queueType; 
  j["content"] = v.content; 
  }
  void from_json(const json& j, LolPerksGameCustomizationDTO& v) {
  v.category = j.at("category").get<std::string>(); 
  v.queueType = j.at("queueType").get<uint64_t>(); 
  v.content = j.at("content").get<std::string>(); 
  }
}