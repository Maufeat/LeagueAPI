#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolPerksQueue { /**/ 
    int32_t id;/**/
  };
  static void to_json(json& j, const LolPerksQueue& v) { 
    j["id"] = v.id;
  }
  static void from_json(const json& j, LolPerksQueue& v) { 
    v.id = j.at("id").get<int32_t>(); 
  }
} 