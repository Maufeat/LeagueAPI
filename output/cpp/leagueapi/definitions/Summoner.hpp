#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct Summoner { /**/ 
    uint64_t acctId;/**/
    uint64_t sumId;/**/
  };
  static void to_json(json& j, const Summoner& v) { 
    j["acctId"] = v.acctId;
    j["sumId"] = v.sumId;
  }
  static void from_json(const json& j, Summoner& v) { 
    v.acctId = j.at("acctId").get<uint64_t>(); 
    v.sumId = j.at("sumId").get<uint64_t>(); 
  }
} 