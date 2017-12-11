#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct EndOfGameLcdsSpell { /**/ 
    int32_t spellId;/**/
  };
  static void to_json(json& j, const EndOfGameLcdsSpell& v) { 
    j["spellId"] = v.spellId;
  }
  static void from_json(const json& j, EndOfGameLcdsSpell& v) { 
    v.spellId = j.at("spellId").get<int32_t>(); 
  }
} 