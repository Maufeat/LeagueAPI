#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolEndOfGameRerollDataBagForClientV1.hpp>

namespace leagueapi {
  struct LolEndOfGameGameloopPlayerInfoV1 { /**/ 
    LolEndOfGameRerollDataBagForClientV1 rerollDataBag;/**/
  };
  static void to_json(json& j, const LolEndOfGameGameloopPlayerInfoV1& v) { 
    j["rerollDataBag"] = v.rerollDataBag;
  }
  static void from_json(const json& j, LolEndOfGameGameloopPlayerInfoV1& v) { 
    v.rerollDataBag = j.at("rerollDataBag").get<LolEndOfGameRerollDataBagForClientV1>(); 
  }
} 