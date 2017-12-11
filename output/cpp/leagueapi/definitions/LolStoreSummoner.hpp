#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolStoreSummoner { /**/ 
    uint64_t acctId;/**/
    uint64_t sumId;/**/
  };
  static void to_json(json& j, const LolStoreSummoner& v) { 
    j["acctId"] = v.acctId;
    j["sumId"] = v.sumId;
  }
  static void from_json(const json& j, LolStoreSummoner& v) { 
    v.acctId = j.at("acctId").get<uint64_t>(); 
    v.sumId = j.at("sumId").get<uint64_t>(); 
  }
} 