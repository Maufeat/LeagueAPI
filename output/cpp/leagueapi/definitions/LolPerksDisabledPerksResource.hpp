#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolPerksDisabledPerksResource { /**/ 
    std::vector<int32_t> disabledPerks;/**/
  };
  static void to_json(json& j, const LolPerksDisabledPerksResource& v) { 
    j["disabledPerks"] = v.disabledPerks;
  }
  static void from_json(const json& j, LolPerksDisabledPerksResource& v) { 
    v.disabledPerks = j.at("disabledPerks").get<std::vector<int32_t>>(); 
  }
} 