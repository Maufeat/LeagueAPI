#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolClashChangeIconRequest { /**/ 
    int32_t iconColorId;/**/
    int32_t iconId;/**/
  };
  static void to_json(json& j, const LolClashChangeIconRequest& v) { 
    j["iconColorId"] = v.iconColorId;
    j["iconId"] = v.iconId;
  }
  static void from_json(const json& j, LolClashChangeIconRequest& v) { 
    v.iconColorId = j.at("iconColorId").get<int32_t>(); 
    v.iconId = j.at("iconId").get<int32_t>(); 
  }
} 