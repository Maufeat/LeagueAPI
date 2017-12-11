#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolPerksGameCustomizationDTO { /**/ 
    std::string category;/**/
    uint64_t queueType;/**/
    std::string content;/**/
  };
  static void to_json(json& j, const LolPerksGameCustomizationDTO& v) { 
    j["category"] = v.category;
    j["queueType"] = v.queueType;
    j["content"] = v.content;
  }
  static void from_json(const json& j, LolPerksGameCustomizationDTO& v) { 
    v.category = j.at("category").get<std::string>(); 
    v.queueType = j.at("queueType").get<uint64_t>(); 
    v.content = j.at("content").get<std::string>(); 
  }
} 