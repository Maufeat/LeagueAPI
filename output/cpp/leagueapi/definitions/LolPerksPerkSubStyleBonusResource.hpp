#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolPerksPerkSubStyleBonusResource { /**/ 
    int32_t styleId;/**/
    int32_t perkId;/**/
  };
  static void to_json(json& j, const LolPerksPerkSubStyleBonusResource& v) { 
    j["styleId"] = v.styleId;
    j["perkId"] = v.perkId;
  }
  static void from_json(const json& j, LolPerksPerkSubStyleBonusResource& v) { 
    v.styleId = j.at("styleId").get<int32_t>(); 
    v.perkId = j.at("perkId").get<int32_t>(); 
  }
} 