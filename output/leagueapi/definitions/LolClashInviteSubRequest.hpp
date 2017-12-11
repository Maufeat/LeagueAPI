#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolClashInviteSubRequest { /**/ 
    uint64_t replacedSummonerId;/**/
    uint64_t substituteSummonerId;/**/
  };
  static void to_json(json& j, const LolClashInviteSubRequest& v) { 
    j["replacedSummonerId"] = v.replacedSummonerId;
    j["substituteSummonerId"] = v.substituteSummonerId;
  }
  static void from_json(const json& j, LolClashInviteSubRequest& v) { 
    v.replacedSummonerId = j.at("replacedSummonerId").get<uint64_t>(); 
    v.substituteSummonerId = j.at("substituteSummonerId").get<uint64_t>(); 
  }
} 