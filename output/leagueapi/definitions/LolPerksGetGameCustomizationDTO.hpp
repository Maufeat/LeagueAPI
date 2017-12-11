#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolPerksGetGameCustomizationDTO { /**/ 
    std::string queueType;/**/
  };
  static void to_json(json& j, const LolPerksGetGameCustomizationDTO& v) { 
    j["queueType"] = v.queueType;
  }
  static void from_json(const json& j, LolPerksGetGameCustomizationDTO& v) { 
    v.queueType = j.at("queueType").get<std::string>(); 
  }
} 